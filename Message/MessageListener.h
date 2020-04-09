//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_MESSAGELISTENER_H
#define DORA_MESSAGELISTENER_H

#include "Message.h"
template <typename T>
class MessageListener {
public:
    virtual void messageReceived(Message<T> *pMessage) = 0;

};


#endif //DORA_MESSAGELISTENER_H
