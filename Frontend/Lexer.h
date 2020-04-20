//
// Created by frank_lu on 2020/4/1.
//

#ifndef DORA_LEXER_H
#define DORA_LEXER_H


#include "Source.h"
#include "Token.h"

class Lexer {
private:

    Token * pCurrentToken = nullptr;

protected:

    Source *pSource = nullptr;

    char currentChar();

    char nextChar();

    virtual Token * extractToken() = 0;

public:

    Lexer(Source *pSource);

    ~Lexer();

    Token * currentToken();

    Token * nextToken();

    Token * peekToken();



};


#endif //DORA_LEXER_H
