#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <utility>

#include "animal.h"


class Elephant : public Animal
{
private:
    std::string m_type;

public:
    Elephant(const std::string & name, std::string  type) : Animal(name), m_type(std::move(type)) {};

public:
    std::string getType() const
    {
        return m_type;
    }

    void walkTo(const std::string& position)
    {
        std::cout << m_name << " is now walking to " + position + "!" << std::endl;
        std::cout << "Walking done!" << std::endl;
    }

    void trumpet()
    {
        std::cout << m_name + " is trumpeting!" << std::endl;
        std::cout << "Trumpeting done!" << std::endl;
    }
};

#endif