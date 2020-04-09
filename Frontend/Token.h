//
// Created by frank_lu on 2020/4/1.
//

#ifndef DORA_TOKEN_H
#define DORA_TOKEN_H


#include <string>
#include "TokenType.h"
#include "Source.h"

class Token {
protected:
    Source *pSource = nullptr;
    TokenType *pTokenType  = nullptr;
    std::string *pName = nullptr;
    unsigned int col = 0,row = 0;
    void *pValue  = nullptr;
    virtual void extract() = 0;
    char currentChar();
    char nextChar();
    char peekChar();
public:
    Token(Source *pSource);
    ~Token();
    void setTokenType(TokenType *pTokenType);
    TokenType * getTokenType();
    void setName(std::string *pName);
    std::string* getName();
    void setCol(unsigned int col);
    unsigned int getCol();
    void setRow(unsigned int row);
    unsigned int getRow();
    void setValue(void *pValue);
    Source* getValue();

};


#endif //DORA_TOKEN_H
