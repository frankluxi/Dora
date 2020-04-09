//
// Created by frank_lu on 2020/4/2.
//

#ifndef DORA_TESTIO_H
#define DORA_TESTIO_H


#include <istream>

class TestIO {
private:
    static const size_t BUF_SIZE=1024;
    std::istream *pIStream = nullptr;
    char *pLine = nullptr;
    void *pObject = nullptr;

public:
    TestIO(std::istream *pIStream);
    ~TestIO();
    void readLine();
    void close();
    void setObje(void *pObject);



};


#endif //DORA_TESTIO_H
