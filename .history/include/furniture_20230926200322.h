#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
#include <string>

class Furniture
{
private:
    std::string m_name;
    std::string m_material;
    std::string m_color;

public:
    Furniture(const std::string & name, const std::string & material, const std::string & color) :
                m_name(name), 
};

#endif