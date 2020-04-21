//
// Created by frank_lu on 2020/4/1.
//

#include "Token.h"
Token::Token(Source *pSource)
{
    if(!pSource)
    {
        throw "invalid Source!";
    }
    Token::pSource = pSource;
    row = Token::pSource ->getRow();
    col = Token::pSource ->getCol();
    extract();
}

Token::~Token()
{
//    if(pSource)
//    {
//        delete  pSource;
//        pSource = nullptr;
//    }

//    if(pValue)
//    {
//        delete pValue;
//        pValue = nullptr;
//    }
}



char Token::currentChar()
{
    return !pSource ? '\0':pSource->currentChar();
}

char Token::nextChar()
{
    return !pSource ? '\0':pSource->nextChar();
}

char Token::peekChar()
{
    return !pSource ? '\0':pSource->currentChar();
}

const std::string &Token::getName() const {
    return name;
}

void Token::setName(const std::string &name) {
    Token::name = name;
}

void Token::setCol(unsigned int col)
{
    Token::col = col;
}

unsigned int Token::getCol()
{
    return  col;
}

void Token::setRow(unsigned int row)
{
    Token::row = row;
}

unsigned int Token::getRow()
{
    return row;
}

void Token::setValue(void *pValue)
{
    Token::pValue = pValue;
}

void * Token::getValue()
{
    return pValue;
}

void Token::extract() {}

int Token::getTokenType() const {
    return tokenType;
}

void Token::setTokenType(int tokenType) {
    Token::tokenType = tokenType;
}

