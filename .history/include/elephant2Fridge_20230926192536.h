#ifndef ELEPHANT2FRIDGE
#define ELEPHANT2FRIDGE

#include <string>

enum sexType{Male, Female, NON_BINARY};

struct colorType {
    int R;
    int G;
    int B;
};

class Animal {
public:
    std::string m_name;
    int m_age;
    sexType m_sex;
    colorType color;
};

class Elephant

#endif