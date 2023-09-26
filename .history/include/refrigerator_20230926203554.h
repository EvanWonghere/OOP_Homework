#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "appliance.h"

class Refrigerator : Appliance
{
private:
    int m_capacity;

public:
    Refrigerator(const std::string & name,  const std::string & material,
                 const std::string & color, const elecStatus & isOn, const int & capacity) :
                Appliance(name, material, color, isOn), m_capacity(capacity) {};
    ~Refrigerator();

public:
    void openDoor() const
    {
        std::cout << "Door opened!" << std::endl;
    }

    void closeDoor() const
    {
        std::Cout <
    }

public:
    void setCapacity(const int & capacity)
    {
        m_capacity = capacity;
    }

    int getCapacity() const
    {
        return m_capacity;
    }
};

#endif