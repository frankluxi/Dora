//
// Created by frank_lu on 2020/4/3.
//

#ifndef DORA_FILESOURCE_H
#define DORA_FILESOURCE_H

#include <fstream>
#include "BaseSource.h"

class FileSource : public BaseSource{
public:
    FileSource(const char* pFilePath);
    ~FileSource();

    virtual bool close();

};


#endif //DORA_FILESOURCE_H
