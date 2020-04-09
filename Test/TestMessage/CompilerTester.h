//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_COMPILERTESTER_H
#define DORA_COMPILERTESTER_H

#include <string>
#include "../../Message/MessageRegister.h"
#include "../../Message/MessageHandler.h"
/*要消息模式支持的话，要么继承MessageHandler要么继承MessageRegister
 * 实现MessageHandler可以更省代码*/

class CompilerTester : public MessageHandler<CompilerTester>{
private:
    //MessageHandler<CompilerTester> *pMessageHandler;
    std::string name;
public:
    CompilerTester();
    ~CompilerTester();
    //void addMessageListener(MessageListener<CompilerTester> *pMessageListener) ;
    //void removeMessageListener(MessageListener<CompilerTester> *pMessageListener) ;
    //void sendMessage(Message<CompilerTester> *pMessage);
    void setName(const std::string & name);
    std::string & getName();

};


#endif //DORA_COMPILERTESTER_H
