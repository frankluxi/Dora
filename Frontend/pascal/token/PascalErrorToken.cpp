//
// Created by frank_lu on 2020/4/20.
//

#include "PascalErrorToken.h"
#include "../PascalTokeType.h"

PascalErrorToken::PascalErrorToken(Source *pSource, int errorCode, std::string tokenText) :PascalToken(pSource){

    PascalErrorToken::pValue = &errorCode;
    PascalErrorToken::name = tokenText;
    PascalErrorToken::tokenType = ERROR;

}

PascalErrorToken::~PascalErrorToken() {

}

void PascalErrorToken::extract() {

}
