#ifndef ELEPHANT2FRIDGE
#define ELEPHANT2FRIDGE

#include <string>

enum genderType{Male, Female, NON_BINARY};
enum healthStatus{BAD, NOT_GOOD, WELL, NOT_BAD, GOOD};

struct colorType {
    int R;
    int G;
    int B;
};

class Animal {
public:
    std::string m_name;
    int m_age;
    genderType m_gender;
    colorType m_color;
    int weight;
    healthStatus m_healthStaus
};

class Elephant

#endif