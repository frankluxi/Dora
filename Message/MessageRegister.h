//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_MESSAGEREGISTER_H
#define DORA_MESSAGEREGISTER_H


#include "MessageListener.h"
template <typename T>
class MessageRegister {
public:
    virtual void addMessageListener(MessageListener<T> *pMessageListener) = 0;
    virtual void removeMessageListener(MessageListener<T> *pMessageListener) = 0;
    virtual void sendMessage(Message<T> *pMessage)=0;

};


#endif //DORA_MESSAGEREGISTER_H
