//
// Created by frank_lu on 2020/4/15.
//

#include "SyntaxTree.h"

SyntaxTree *SyntaxTree::getPRoot() const {
    return pRoot;
}

void SyntaxTree::setPRoot(SyntaxTree *pRoot) {
    SyntaxTree::pRoot = pRoot;
}
