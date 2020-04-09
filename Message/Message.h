//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_MESSAGE_H
#define DORA_MESSAGE_H

#include <iostream>
#include "MessageType.h"
template <typename T>
class Message {
private:
    MessageType messageType ;
    T *pSource = nullptr;
public:
    Message(const MessageType & messageType, T *pSource):messageType(messageType),pSource(pSource)
    {
        std::cout<<"Message created type = " << messageType <<std::endl;
    }

    ~Message()
    {
        std::cout<<"Message destoryed type = " << messageType <<std::endl;
    }

    void setSource(T *pSource)
    {
        this->pSource = pSource;
    }

    T* getSource()
    {
        return pSource;
    }

    MessageType getMessageType()
    {
        return messageType;
    }

};


#endif //DORA_MESSAGE_H
