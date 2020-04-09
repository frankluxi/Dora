//
// Created by frank_lu on 2020/4/2.
//
#include <stdlib.h>
#include <iostream>
#include "TestIO.h"
TestIO::TestIO(std::istream *pIStream)
{
    pLine = (char*)malloc(BUF_SIZE);
    this->pIStream = pIStream;
}

void TestIO::readLine()
{
    if(pIStream)
    {
        //;
        if(pIStream->getline(pLine,BUF_SIZE))
            std::cout <<pIStream<<"      test "<< pIStream->eof()<<"  " << "  "<<pLine<<std::endl;
    }
}

TestIO::~TestIO()
{
    if(pIStream)
        delete pIStream;
    if(pLine)
        delete pLine;
}

void TestIO::setObje(void *pObject)
{
    this->pObject = pObject;
    std::istream *pStream = (std::istream *) this->pObject;
    pStream->getline(pLine,BUF_SIZE);
    std::cout<<pLine<<std::endl;

}

