//
// Created by frank_lu on 2020/3/31.
//

#ifndef DORA_TESTMESSAGELISTENER_H
#define DORA_TESTMESSAGELISTENER_H

#include "../../Message/MessageListener.h"
#include "CompilerTester.h"

class TestMessageListener :public  MessageListener<CompilerTester>{
public:
    void messageReceived(Message<CompilerTester> *pMessage);


};


#endif //DORA_TESTMESSAGELISTENER_H
