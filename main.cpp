#include <iostream>

#include <vector>
#include <fstream>
#include <istream>
#include <cstring>

#include "Message/MessageHandler.h"
#include "Test/TestMessage/CompilerTester.h"
#include "Test/TestIO.h"
#include "Frontend/FileSource.h"

char* fun();
char* fun1();
char fun3(int i);
int main() {



    //std::cout<<tmp;
    //std::ifstream *fi = new std::ifstream("/home/frank_lu/Chapter2/hello.pas");
    FileSource *fs = new FileSource("/home/frank_lu/Chapter2/hello.pas");


    char ch = fs->currentChar();


    while (ch != Source::EOF_CHAR)
    {
        std::cout<<ch;

        ch = fs->nextChar();
    }
    delete(fs);
    //fi->close();
    //delete fi;
//    for(int i = 0;i<200;i++)
//        std::cout<<program[i]<<std::flush;

    //std::cout<<std::endl;

    return 0;
}

char* fun()
{
    char p[1024] ={0};
    std::cout << sizeof(p)<< std::endl;
    return nullptr;
}

char* fun1()
{
    char *pChar = nullptr;

    std::cout<<(void *)pChar<<std::endl;
    if(pChar == nullptr)
    {
        pChar = new char;
        std::cout<<(void *)pChar<<std::endl;
    }

    //*pChar = '6';
    return pChar;
}

