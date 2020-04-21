//
// Created by frank_lu on 2020/4/1.
//

#ifndef DORA_TOKEN_H
#define DORA_TOKEN_H


#include <string>

#include "Source.h"

class Token {

protected:

    Source *pSource = nullptr;

    int tokenType = -1;

    std::string name ;

    unsigned int col = 0,row = 0;

    void *pValue  = nullptr;

    virtual void extract();

    char currentChar();

    char nextChar();

    char peekChar();

public:

    Token(Source *pSource);

    ~Token();

    int getTokenType() const;

    void setTokenType(int tokenType);

    void setCol(unsigned int col);

    unsigned int getCol();

    void setRow(unsigned int row);

    unsigned int getRow();

    void setValue(void *pValue);

    void* getValue();

    const std::string &getName() const;

    void setName(const std::string &name);

};


#endif //DORA_TOKEN_H
