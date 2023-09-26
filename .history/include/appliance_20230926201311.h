#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <furniture.h>

class  Appliance : Furniture
{
private:
    std::string m_brand;
    bool m_isOn;

public:
    Appliance(const std::string & name,  const std::string & material,
              const std::string & color, const bool & isOn)
            : Furniture(name, material, color), m_isOn(isOn) {};
    ~Appliance();

public:
    std::string getBrand() const
    {
        return m_brand;
    }
};

#endif