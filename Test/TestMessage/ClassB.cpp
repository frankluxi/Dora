//
// Created by frank_lu on 2020/4/10.
//

#include "ClassB.h"

int ClassB::getAge() const {
    return age;
}

void ClassB::setAge(int age) {
    ClassB::age = age;
}

 std::string & ClassB::getName()  {
    return name;

}

void ClassB::setName(const std::string &name) {
    ClassB::name = name;

}
