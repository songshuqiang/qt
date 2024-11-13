#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
/************************************************************************************************************/
    this->setWindowTitle("tcp服务器");
    server=new QTcpServer(this);//监听套接字
    if(!server->listen(QHostAddress::AnyIPv4,9999)){
        qDebug()<<"listen:"<<server->errorString();
    }
    else
        qDebug()<<"listen successful";
    connect(server,&QTcpServer::newConnection,this,&Widget::accept_client);



    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("questions.db");
    if(!db.open()){
        QMessageBox::warning(this,"提示","数据库打开失败");
        return;
    }
    //方式一
    //题库表
    QString sql = "CREATE TABLE if not exists questions(id INTEGER PRIMARY KEY,question TEXT NOT NULL,image BLOB,answer TEXT NOT NULL)";
    query = new QSqlQuery(db);
    if (!query->exec(sql)) {  //执行sql语句
        qDebug() << "create table: " << query->lastError().text();
        return;
    }
    //用户表
    QString sql1 = "CREATE TABLE if not exists user(id INTEGER PRIMARY KEY,username VARCHAR(255) NOT NULL UNIQUE,password VARCHAR(255) NOT NULL)";
    if (!query->exec(sql1)) {  //执行sql语句
        qDebug() << "create table: " << query->lastError().text();
        return;
    }
    insertQuestions();

//    QSqlQuery query;
//    QFile file1(":/1.jpg");
//    if (file1.open(QIODevice::ReadOnly)) {
//        QByteArray imageData1 = file1.readAll();
//        qDebug()<<imageData1.size();
//        file1.close();
//        bool success = query.exec(QString("INSERT INTO questions (question, image, answer) VALUES ('What is the capital of France?', %1, 'Paris')").arg(QString::fromLatin1(imageData1.toBase64())));
//        if (!success) {
//            qDebug() << "Insert failed:" << query.lastError().text();
//        } else {
//            qDebug() << "Insert succeeded";
//        }
//    }
//    query.exec("INSERT INTO questions (question, image, answer) VALUES ('What is the boiling point of water in Celsius?', NULL, '100')");



/****************************************************************************************************************
*方式二
//    QString sql = "CREATE TABLE if not exists questions(id INTEGER PRIMARY KEY, question TEXT NOT NULL, image BLOB, answer TEXT NOT NULL)";
//    QSqlQuery createTableQuery(db);
//    if (!createTableQuery.exec(sql)) {  // 执行SQL语句
//        qDebug() << "create table error: " << createTableQuery.lastError().text();
//        return;
//    }
****************************************************************************************************************/




}

Widget::~Widget()
{
    delete ui;
}

void Widget:: accept_client(){
    if(server->hasPendingConnections()){
        socket=server->nextPendingConnection();//新连接
        connect(socket,&QTcpSocket::readyRead,this,&Widget::recv_data);
        connect(socket,&QTcpSocket::disconnected,this,&Widget::disconnect_client);

    }
}

void Widget::recv_data(){
    QByteArray requestData = socket->readAll();
    qDebug() << "Received request:" << requestData;

    // 分析请求类型
    QStringList requestParts = QString(requestData).split(":");
    QString command = requestParts[0];

    if (command == "REGISTER") {
        handleRegister(socket, requestParts[1], requestParts[2]);
    } else if (command == "LOGIN") {
        handleLogin(socket, requestParts[1], requestParts[2]);
    } else if (command == "PIC") {
        handlepic(socket, requestParts[1], requestParts[2]);
    } else if (command == "TEXT") {
        handletext(socket, requestParts[1], requestParts[2]);
    }
    else{
        QByteArray response = "Unknown request";
        socket->write(response);
        socket->flush();
    }
}


void Widget::disconnect_client(){
    qDebug()<<"client leven"<<socket->peerAddress().toString();
}

void Widget::handleRegister(QTcpSocket *socket, QString username, QString hashedPassword)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", hashedPassword);

    if (query.exec()) {
        QString respond="REG_POND";
        QString response = "Registration successful";
        QString ponddata=QString("%1:%2").arg(respond).arg(response);
        socket->write(ponddata.toUtf8());
    } else {
        QByteArray response = "Error: " + query.lastError().text().toUtf8();
        socket->write(response);
    }
    socket->flush();
}

void Widget::handleLogin(QTcpSocket *socket, QString username, QString hashedPassword)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", hashedPassword);

    if (query.exec() && query.next()) {
        QString response = "Login successful";
        QString respond="REG_POND";

        QString ponddata=QString("%1:%2").arg(respond).arg(response);
        socket->write(ponddata.toUtf8());

    } else {
        QByteArray response = "Login failed: Incorrect username or password";
        socket->write(response);
    }
    socket->flush();
}

void Widget::handlepic(QTcpSocket *socket, QString username, QString b)
{

}

void Widget::handletext(QTcpSocket *socket, QString a, QString b)
{

}

void Widget::insertQuestions()
{
//    QString filename=QFileDialog::getOpenFileName(this,"图片","../","pic(*.jpg *png)");
//    qDebug()<<filename;
    // 插入不带图片的题目
       QSqlQuery query;
       query.exec("INSERT INTO questions (question, image, answer) VALUES ('What is the chemical symbol for gold?', NULL, 'Au')");
       query.exec("INSERT INTO questions (question, image, answer) VALUES ('What is the boiling point of water in Celsius?', NULL, '100')");

       // 插入带图片的题目
       QFile file1(":/1.jpg");
       if (file1.open(QIODevice::ReadOnly)) {
           QByteArray imageData1 = file1.readAll();
           qDebug() << "Image size: " << imageData1.size();
           file1.close();

//           QSqlQuery insertQuery(db);
           query.prepare("INSERT INTO questions (question, image, answer) VALUES (:question, :image, :answer)");
           query.bindValue(":question", "What is the capital of France?");
           query.bindValue(":image", imageData1);  // 直接绑定二进制数据
           query.bindValue(":answer", "Paris");

           if (!query.exec()) {
               qDebug() << "Insert failed:" << query.lastError().text();
           } else {
               qDebug() << "Insert succeeded11111";
           }
       }

       QFile file(":/2.jpg");
       if (file.open(QIODevice::ReadOnly)) {
           QByteArray imageData2 = file.readAll();
           qDebug() << "Image size: " << imageData2.size();
           file1.close();

           //           QSqlQuery insertQuery(db);
           query.prepare("INSERT INTO questions (question, image, answer) VALUES (:question, :image, :answer)");
           query.bindValue(":question", "What is the highest mountain in the world?");
           query.bindValue(":image", imageData2);  // 直接绑定二进制数据
           query.bindValue(":answer", "Mount Everest");

           if (!query.exec()) {
               qDebug() << "Insert failed:" << query.lastError().text();
           } else {
               qDebug() << "Insert succeeded2222";
           }
       }
//       if (file2.open(QIODevice::ReadOnly)) {
//           QByteArray imageData2 = file2.readAll();
//           file2.close();
//           qDebug()<<imageData2;
//           query.exec(QString("INSERT INTO questions (question, image, answer) VALUES ('What is the highest mountain in the world?', %1, 'Mount Everest')").arg(QString::fromLatin1(imageData2.toBase64())));
//       }

       QFile file3(":/3.jpg");
       if (file3.open(QIODevice::ReadOnly)) {
           QByteArray imageData3= file3.readAll();
           qDebug() << "Image size: " << imageData3.size();
           file1.close();

//           QSqlQuery insertQuery(db);
           query.prepare("INSERT INTO questions (question, image, answer) VALUES (:question, :image, :answer)");
           query.bindValue(":question", "What is the largest planet in our solar system?");
           query.bindValue(":image", imageData3);  // 直接绑定二进制数据
           query.bindValue(":answer", "Jupiter");

           if (!query.exec()) {
               qDebug() << "Insert failed:" << query.lastError().text();
           } else {
               qDebug() << "Insert succeeded3333";
           }
       }
//       if (file3.open(QIODevice::ReadOnly)) {
//           QByteArray imageData3 = file3.readAll();
//           file3.close();
//           query.exec(QString("INSERT INTO questions (question, image, answer) VALUES ('What is the largest planet in our solar system?', %1, 'Jupiter')").arg(QString::fromLatin1(imageData3.toBase64())));
//       }
}
