//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_MESSAGEHANDLER_H
#define DORA_MESSAGEHANDLER_H

#include <vector>
#include "MessageListener.h"
template <typename T>

class MessageHandler {
protected:
    std::vector<MessageListener<T>*> *pListeners = nullptr;
    Message<T> *pMessage = nullptr;
private:
    void notifyListeners()
    {
        if(!pListeners)
        {
            for(auto it = pListeners->cbegin();it != pListeners->cend();it++)
            {
                (*it) ->messageReceived(pMessage);
            }
        }
    }
public:
    MessageHandler()
    {
        std::cout<<"MessageHandler is created!!!"<<std::endl;
        pListeners = new std::vector<MessageListener<T>*>();
    }
    ~MessageHandler()
    {
        MessageListener<T> *pListener = nullptr;
        if(pListeners)
        {
            for(auto it = pListeners->cbegin();it != pListeners->cend();it++)
            {
                /*由于Listener在申请内存之后就交由本类来管理，在实际业务逻辑中其生命周期与本类一致，因此本类可以对Listener进行释放*/
                pListener = *it;
                delete pListener;
                std::cout<<"Listener is destoryed!!!"<<std::endl;
                pListener = nullptr;
            }
            delete pListeners;
            pListeners = nullptr;
            std::cout<<"Listeners is destoryed!!!"<<std::endl;
            /*尽量不要在类中释放不是本类申请的内存*/
//            if(pMessage != nullptr)
//            {
//                delete(pMessage);
//                std::cout<<"Message is destoryed!!!"<<std::endl;
//            }

        }

    }
    void sendMessage(Message<T> *pMessage)
    {
        this->pMessage = pMessage;
        notifyListeners();
    }
    void addListener(MessageListener<T> *pListener)
    {
        if(!pListeners)
            return;
        pListeners ->push_back(pListener);
    }
    void removeListener(MessageListener<T> *pListener)
    {
        if(!pListeners)
        {
            //it = pListeners->begin();
            for(auto it = pListeners->cbegin();it != pListeners->cend();it++)
            {
                if(*it == pListener)
                    pListeners->erase(it);
            }
        }
    }
};


#endif //DORA_MESSAGEHANDLER_H
