//
// Created by frank_lu on 2020/4/1.
//

#include "Lexer.h"

char Lexer::currentChar() {
    if(!pSource)
        throw "invalid source!";
    return pSource->currentChar();
}

char Lexer::nextChar() {
    if(!pSource)
        throw "invalid source!";
    return pSource->nextChar();
}

Lexer::Lexer(Source *pSource) {
    if(!pSource)
        throw "invalid source!";
    Lexer::pSource = pSource;
}

Lexer::~Lexer() {
    if(pSource)
    {
        delete(pSource);
        pSource = nullptr;
    }
    if(pCurrentToken)
    {
        delete(pCurrentToken);
        pCurrentToken = nullptr;
    }
}

Token *Lexer::currentToken() {
    if(!pCurrentToken)
        pCurrentToken = nextToken();
    return pCurrentToken;
}

Token *Lexer::nextToken() {
    if(pCurrentToken)
    {
        delete pCurrentToken;
        pCurrentToken = nullptr;
    }

    pCurrentToken = extractToken();
    return pCurrentToken;
}

Token *Lexer::peekToken() {
    return nullptr;
}
