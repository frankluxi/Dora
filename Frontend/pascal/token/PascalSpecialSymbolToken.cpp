//
// Created by frank_lu on 2020/4/21.
//

#include "PascalSpecialSymbolToken.h"

PascalSpecialSymbolToken::PascalSpecialSymbolToken(Source *pSource) : PascalToken(pSource) {

    //PascalSpecialSymbolToken::specialSymbol
    PascalSpecialSymbolToken::iniSpecialSymbolMap();

}

PascalSpecialSymbolToken::~PascalSpecialSymbolToken() {

}

void PascalSpecialSymbolToken::extract() {
    char currChar = currentChar();
    this->name = currChar;

    switch (currChar) {
        case '+': case '-': case '*': case '/': case ',':
        case ';': case '\'': case '=': case '(': case ')':
        case '[': case ']': case '{': case '}': case '^':
            currChar = nextChar();
            break;
        case '<':
            currChar = nextChar();
            if(currChar == '=' || currChar == '>')
                name += currChar;
            break;
        case '>':
            currChar = nextChar();
            if(currChar == '=')
                name += currChar;
            break;
        case '.' ://.
            currChar = nextChar();
            if(currChar == '.')
                name += currChar;
            break;
        case ':' ://=
            currChar = nextChar();
            if(currChar == '=')
                name += currChar;
            break;
        default:
            tokenType = ERROR;
            name = "Invalid character";
            break;
    }
    if(-1 == tokenType)
    {
        std::map<std::string, PascalTokenType>::iterator it_find;
        it_find = PascalSpecialSymbolToken::specialSymbolMap.find(name);
        tokenType = it_find != PascalSpecialSymbolToken::specialSymbolMap.end() ? it_find ->second : ERROR;
    }
}

void PascalSpecialSymbolToken::iniSpecialSymbolMap() {

    if(PascalSpecialSymbolToken::specialSymbolMap.size() == 0)
    {
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("+",PLUS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("-", MINUS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("*",STAR));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("/",SLASH));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (":=",COLON_EQUALS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (".",DOT));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (",",COMMA));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (";",SEMICOLON));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (":",COLON));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("'",QUOTE));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("=",EQUALS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("<>",NOT_EQUALS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("<",LESS_THAN));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("<=",LESS_EQUALS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (">=",GREATER_EQUALS));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (">",GREATER_THAN));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("(",LEFT_PAREN));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> (")",RIGHT_PAREN));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("[",LEFT_BRACKET));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("]",RIGHT_BRACKET));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("{",LEFT_BRACE));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("}",RIGHT_BRACE));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("^",UP_ARROW));
        PascalSpecialSymbolToken::specialSymbolMap.insert( std::pair<std::string,PascalTokenType> ("..",DOT_DOT));
    }
}
