//
// Created by frank_lu on 2020/4/10.
//

#ifndef DORA_CLASSB_H
#define DORA_CLASSB_H


#include <string>

class ClassB {
private:
   int age;
   std::string name;
public:
     std::string &getName() ;

    void setName(const std::string &name);

public:
    int getAge() const;

    void setAge(int age);


};


#endif //DORA_CLASSB_H
