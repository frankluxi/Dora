//
// Created by frank_lu on 2020/4/1.
//

#ifndef DORA_TOKEN_H
#define DORA_TOKEN_H


#include <string>
#include "TokenType.h"

class Token {
private:
    TokenType *tokenType;
    std::string name;
    unsigned int col = 0,row = 0;
    void *pValue;
};


#endif //DORA_TOKEN_H
