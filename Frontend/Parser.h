//
// Created by frank_lu on 2020/4/2.
//

#ifndef DORA_PARSER_H
#define DORA_PARSER_H


#include "Lexer.h"
#include "../Intermediate/SyntaxTree.h"

class Parser {

protected:
    Lexer *pLexer = nullptr;
public:
    Parser(Lexer * pLexer);

    ~Parser();

    virtual SyntaxTree * parse() = 0;

    virtual int getErrorCount() = 0;

    Token * currentToken();

    Token * nextToken();


};


#endif //DORA_PARSER_H
