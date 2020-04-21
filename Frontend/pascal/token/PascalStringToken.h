//
// Created by frank_lu on 2020/4/15.
//

#ifndef DORA_PASCALSTRINGTOKEN_H
#define DORA_PASCALSTRINGTOKEN_H


#include "../../Token.h"
#include "../PascalToken.h"

class PascalStringToken : public PascalToken{

public:
    PascalStringToken(Source *pSource);
    ~PascalStringToken();

protected:
    void extract() override;

};


#endif //DORA_PASCALSTRINGTOKEN_H
