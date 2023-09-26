#ifndef ELEPHANT2FRIDGE
#define ELEPHANT2FRIDGE

#include <iostream>
#include <string>

enum genderType{Male, Female, NON_BINARY};
enum healthStatus{BAD, NOT_GOOD, WELL, NOT_BAD, GOOD};

struct colorType {
    int R;
    int G;
    int B;
};

struct date {
    int year;
    int month;
    int day;
};

class Animal {
private:
    std::string m_name;
    int m_age;
    genderType m_gender;
    colorType m_color;
    int weight;
    healthStatus m_healthStatus;
    date m_birthday;
    bool hasOwner;

public:
    Animal(const std::string & name) : m_name(name) {};
    ~Animal();

public:
    void eat(const std::string food) cons
    {
        std::cout << "Eating food " + food + "!" << std::endl;
    }
};

class Elephant : Animal {

};

#endif