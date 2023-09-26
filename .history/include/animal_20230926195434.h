#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>

enum genderType{Male, Female, NON_BINARY};
enum healthStatus{BAD, NOT_GOOD, WELL, NOT_BAD, GOOD};

struct colorType
{
    int R;
    int G;
    int B;
};

struct date
{
    int year;
    int month;
    int day;
};

class Animal
{
private:
    std::string m_name;
    int m_age;
    genderType m_gender;
    colorType m_color;
    int m_weight;
    int m_height;
    healthStatus m_healthStatus;
    date m_birthday;
    bool hasOwner;

public:
    Animal() : m_name("NotNamed") {};
    Animal(const std::string & name) : m_name(name) {};
    ~Animal();

public:
    void eat(const std::string food) const
    {
        std::cout << "Eating food " + food + "!" << std::endl;
    }

    void sleep(int time) const
    {
        std::cout << "Start sleeping for " << time << " seconds!" << std::endl;
        sleep(time);
        std::cout << "Sleep done!" << std::endl;
    }

public:
    void rename(const std::string & newName)
    {
        m_name = newName;
    }

    void setAge(const int & age)
    {
        m_age = age;
    }

    void setGender(const genderType & gender)
    {
        m_gender = gender;
    }

    void setColor(const colorType & color)
    {
        m_color = color;
    }

    void setWeight(const int & weight)
    {
        m_weight = weight;
    }

    void setHeight(const int & height)
    {
        m_height = height;
    }

    void updateHealthStatus(const healthStatus & status)
    {
        m_healthStatus = status;
    }

    void setBirthday(const date & birthday)
    {
        m_birthday = birthday;
    }

    void updateOwnerStatus(bool status)
    {
        hasOwner = status;
    }

public:
    std::string getName()
    {
        return m_name;
    }

    int getAge()
    {
        return m_age;
    }

    int getGender
};

#endif