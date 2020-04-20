//
// Created by frank_lu on 2020/4/10.
//

#ifndef DORA_CLASSA_H
#define DORA_CLASSA_H


#include "ClassB.h"

class ClassA {
private:
    ClassB b;
public:
    const ClassB &getB() const;

    void setB(const ClassB &b);

};


#endif //DORA_CLASSA_H
