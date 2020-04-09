//
// Created by frank_lu on 2020/3/31.
//

#include "CompilerTester.h"
#include "../../Message/Message.h"
#include "../../Message/MessageType.h"
#include "TestMessageListener.h"

CompilerTester::CompilerTester()
{
    //pMessageHandler = new MessageHandler<CompilerTester>();
    TestMessageListener *pListener = new TestMessageListener();
    addListener(pListener);
}
CompilerTester::~CompilerTester()
{
//    if(t)
//    {
//        delete(pMessageHandler);
//    }
}

//void CompilerTester::addMessageListener(MessageListener<CompilerTester> *pMessageListener)
//{
////    if(!pMessageListener || !pMessageHandler)
////        return;
//    pMessageHandler->addListener(pMessageListener);
//}
//
//void CompilerTester::removeMessageListener(MessageListener<CompilerTester> *pMessageListener)
//{
////    if(!pMessageListener || !pMessageHandler)
////        return;
//    pMessageHandler->removeListener(pMessageListener);
//}
//
//void CompilerTester::sendMessage(Message<CompilerTester> *pMessage)
//{
////    if(!pMessage || !pMessageHandler)
////        return;
//    pMessageHandler->sendMessage(pMessage);
//}


void CompilerTester::setName(const std::string &name)
{
    this->name = name;
    Message<CompilerTester> *pMsg = new Message<CompilerTester>(SOURCE_LINE,this);
    sendMessage(pMsg);
    delete  pMsg;
}

std::string & CompilerTester::getName()
{

    //this->name
    //std::cout<<"getName return " << name<<std::endl;
    return name;
}