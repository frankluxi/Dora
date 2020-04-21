//
// Created by frank_lu on 2020/4/2.
//

#include "Parser.h"

Parser::Parser(Lexer *pLexer)
{
    if(!pLexer)
        throw "invalid Lexer !";
    Parser::pLexer = pLexer;

}

Parser::~Parser() {
    if(pLexer)
    {
        delete pLexer;
        pLexer = nullptr;
    }

}

Token *Parser::currentToken() {
    return pLexer->currentToken();
}

Token *Parser::nextToken() {
    return pLexer->nextToken();
}
