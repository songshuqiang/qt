#ifndef XIEYI_H
#define XIEYI_H

typedef unsigned int unit;

#define REGIST_OK "regist ok"
#define REGIST_FAILED "regist failed : name existed"
#define LOGIN_OK "login ok"
#define LOGIN_FAILED "login failed : name error or pwd error or relogin error"

struct PDU
{
    unit uiMsgType ;     //消息类型
    unit uiMsgLen;      //实际消息长度
    int caMsg[];        //消息内容
};
enum TYPE{
    MIN = 0,
    REGIST_REQUEST,       // 注册请求
    REGIST_RESPOND,       // 注册回复

    LOGIN_REQUEST,        // 登录请求
    LOGIN_RESPOND,
};

#endif // XIEYI_H
