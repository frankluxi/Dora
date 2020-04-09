//
// Created by frank_lu on 2020/4/1.
//

#include <istream>
#include <iostream>
#include <cstring>
#include "BaseSource.h"
BaseSource::BaseSource()
{
    pLine = new char[BUFF_SIZE];
}

BaseSource::~BaseSource()
{


    if(pLine)
    {
        delete pLine;
        pLine = nullptr;
    }

}

bool BaseSource::readLine()
{
    bool ret = 0;
    if(pIStream->getline(pLine,BUFF_SIZE))
    {
        row++;
        col = 0;
        lineLength = pIStream -> gcount();
        ret = 1;
       // std::cout<<pLine<<std::endl;
    }
    else{
        //读取行失败，
            row = -1;
            col = -1;
            lineLength = 0;
        }
    return ret;
}
   
char  BaseSource::currentChar()
{
    //std::cout<< "col is " << col<< " length is " << lineLength;
    //need to init
    char ret = EOF_CHAR;
    if(row == 0)
    {
        if(readLine())
            return nextChar();
        else
            return EOF_CHAR;
    }
    else if(col > lineLength){

        if(readLine())
            return nextChar();
        else
            return EOF_CHAR;
    }
    else{

        ret = col == lineLength ? EOL_CHAR:*(pLine + col - 1);
        //std::cout<<" row = " << row<<" col = "<<col<<" length = " << lineLength<<" ret = "<<ret<<std::endl;
        return ret;//*(pLine + col - 1);
    }

}
char BaseSource::nextChar()
{
    col++;
    return currentChar();
}

char BaseSource::peekChar()
{
    currentChar();
    return  col + 1 < lineLength ? *(pLine + col + 1)  : EOL_CHAR;
}

