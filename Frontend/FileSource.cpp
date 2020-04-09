//
// Created by frank_lu on 2020/4/3.
//


#include "FileSource.h"
FileSource::FileSource(const char* pFilePath)  {
    pIStream = new std::ifstream(pFilePath);
}

FileSource::~FileSource() {
    if(pIStream)
    {
        close();
        delete(pIStream);
        pIStream = nullptr;
    }
}

bool FileSource::close()
{
    bool ret = 0;
    //std::cout<<"close() is called !!!"<<std::endl;
    std::ifstream *pIFStream = (std::ifstream *) pIStream;
    if (pIFStream ->is_open())
        pIFStream ->close();
    ret = 1;
    return ret;
}

//bool FileSource::close()
//{
//    bool ret = 0;
//    std::cout<<"close() is called !!!"<<std::endl;
//    std::ifstream *pIFStream = (std::ifstream *) pIStream;
//    if (pIFStream ->is_open())
//        pIFStream ->close();
//    ret = 1;
//    return ret;
//}
