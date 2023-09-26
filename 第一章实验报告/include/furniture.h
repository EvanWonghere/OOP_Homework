#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
#include <string>
#include <utility>

class Furniture
{
protected:
    std::string m_name;
    std::string m_material;
    std::string m_color;

public:
    Furniture(std::string  name, std::string  material, std::string  color) :
                m_name(std::move(name)), m_material(std::move(material)), m_color(std::move(color)) {} ;

public:
    std::string getName() const
    {
        return m_name;
    }

    void displayInfo() const
    {
        std::cout << "Name: "     << m_name     << std::endl
                  << "Material: " << m_material << std::endl
                  << "Color: "    << m_color    << std::endl;
    }

    void updateInfo(const std::string & name, const std::string & material, const std::string & color)
    {
        m_name     = name;
        m_material = material;
        m_color    = color;
    }
};

#endif