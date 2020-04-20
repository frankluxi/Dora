//
// Created by frank_lu on 2020/4/15.
//

#ifndef DORA_SYNTAXTREE_H
#define DORA_SYNTAXTREE_H


#include <string>

class SyntaxTree {
protected:
    SyntaxTree *pRoot;
public:
    virtual bool setpExec() = 0;

    virtual bool execute() = 0;

    virtual std::string codeGen();

    SyntaxTree *getPRoot() const;

    void setPRoot(SyntaxTree *pRoot);

};


#endif //DORA_SYNTAXTREE_H
