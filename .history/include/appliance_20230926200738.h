#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <furniture.h>

class  Appliance : Furniture
{
private:
    std::string m_brand;
    bool m_isOn;
};

#endif