//
// Created by frank_lu on 2020/3/31.
//

#include "TestMessageListener.h"
void TestMessageListener::messageReceived(Message<CompilerTester> *pMessage)
{
    std::cout<<"message type = " <<pMessage ->getMessageType()<<std::endl;
    std::cout<<"message soure is student and name  = " <<pMessage ->getSource()->getName()<<std::endl;
}
