//
// Created by frank_lu on 2020/4/1.
//

#ifndef DORA_BASESOURCE_H
#define DORA_BASESOURCE_H


#include <iosfwd>

class BaseSource {

protected:
    std::istream *pIStream = nullptr;
    char curChar = '\0';
    char *pLine = nullptr;
    int row = 0,col = 0,lineLength = 0;
    bool readLine();
public:
    static const char EOL_CHAR = '\n';
    static const char EOF_CHAR = '\0';
    static const int BUFF_SIZE = 1024;
    BaseSource();
    ~BaseSource();
    char currentChar();
    char nextChar();
    char peekChar();
    //virtual bool close();



};


#endif //DORA_BASESOURCE_H
