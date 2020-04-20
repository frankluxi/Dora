//
// Created by frank_lu on 2020/4/10.
//

#include <iostream>
#include "ClassA.h"

const ClassB &ClassA::getB() const {
    return b;
}

void ClassA::setB(const ClassB &b) {
    ClassA::b = b;

    std::cout<<"&calssa.b = " << &(ClassA::b)<<std::endl;
}
