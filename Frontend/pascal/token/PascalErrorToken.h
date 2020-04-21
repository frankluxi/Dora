//
// Created by frank_lu on 2020/4/20.
//

#ifndef DORA_PASCALERRORTOKEN_H
#define DORA_PASCALERRORTOKEN_H


#include "../PascalToken.h"

class PascalErrorToken : public PascalToken{

public:

    //PascalErrorToken(Source *pSource);

    PascalErrorToken(Source *pSource, int errorCode, std::string tokenText);

    ~PascalErrorToken();

protected:
    void extract() override;

};




#endif //DORA_PASCALERRORTOKEN_H
