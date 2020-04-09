//
// Created by frank_lu on 2020/4/1.
//

#include "Token.h"
Token::Token(Source *pSource)
{
    this->pSource = pSource;
}
Token::~Token()
{
    if(pSource)
    {
        delete  pSource;
        pSource = nullptr;
    }
    if(pName)
    {
        delete pName;
        pName = nullptr;
    }
    if(pTokenType)
    {
        delete pTokenType;
        pTokenType = nullptr;
    }
    if(pValue)
    {
        delete pValue;
        pValue = nullptr;
    }
}

char Token::currentChar()
{
    return pSource->currentChar();
}

char Token::nextChar()
{
    return pSource->nextChar();
}

char Token::peekChar()
{
    return  pSource->peekChar();
}
