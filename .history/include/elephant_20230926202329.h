#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "animal.h"


class Elephant : Animal
{
private:
    std::string m_type;

public:
    Elephant(const std::string & name, const std::string & type) : Animal(name), m_type(type) {};
    ~Elephant();

public:
    void walkTo(std::string position)
    {
        std::cout << "Start walking to position" + position + "!" << std::endl;
        std::cout << "Walking done!" << std::endl;
    }

    void trumpet()
    {
        std::cout << "The elephant is trumpeting!" << std::endl;
        std::cout << "Trumpeting done!" << std::endl;
    }
};

#endif