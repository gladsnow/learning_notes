#pragma once
#include"LeiFeng.h"

class CFactory
{
public:
    CFactory();
    ~CFactory();
    virtual CLeiFeng* CreateLeiFeng(void) = 0;

};

