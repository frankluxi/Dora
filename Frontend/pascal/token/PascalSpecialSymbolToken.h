//
// Created by frank_lu on 2020/4/21.
//

#ifndef DORA_PASCALSPECIALSYMBOLTOKEN_H
#define DORA_PASCALSPECIALSYMBOLTOKEN_H


#include <map>
#include "../PascalToken.h"
#include "../PascalTokeType.h"

class PascalSpecialSymbolToken : public PascalToken{
private:
    static std::map<std::string,PascalTokenType> specialSymbolMap;
    static void iniSpecialSymbolMap();

public:
    PascalSpecialSymbolToken(Source *pSource);
    ~PascalSpecialSymbolToken();

protected:
    void extract() override;

};


#endif //DORA_PASCALSPECIALSYMBOLTOKEN_H
