#ifndef _DOWNCONVERTER_H_
#define _DOWNCONVERTER_H_

#include <iostream>
#include <yaml-cpp/yaml.h>
#include <cpsw_api_user.h>

#include "CpswTopPaths.h"
#include "JesdRx.h"
#include "Lmk04828.h"

class DownConverter
{
public: 
    DownConverter(Path p);

    bool init();

    bool isInited();

private:
    static const std::string ModuleName;
    static const std::string JesdTopModuleName;

    Path       root;
    Path       jesdRoot;

    // Devices
    JesdRx     jesdRx;
    Lmk04828   lmk;

    // Local commands
    Command    initAmcCardCmd;
};

#endif
