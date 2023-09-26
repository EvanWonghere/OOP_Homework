#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <furniture.h>

enum elecStatus{OFF, ON};

class  Appliance : Furniture
{
private:
    std::string m_brand;
    elecStatus m_isOn;

public:
    Appliance(const std::string & name,  const std::string & material,
              const std::string & color, const elecStatus & isOn)
            : Furniture(name, material, color), m_isOn(isOn) {};
    ~Appliance();

public:
    std::string getBrand() const
    {
        return m_brand;
    }

    void turnOn()
    {
        m_isOn = ON;
    }

    void turnOff()
    {
        m_isOn = OFF;
    }

    bool isTurnOn() 
};

#endif