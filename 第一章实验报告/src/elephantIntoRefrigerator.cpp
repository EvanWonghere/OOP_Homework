#include "elephant.h"
#include "refrigerator.h"

int main()
{
    Elephant wyr("Wang Yi Ran", "NAO elephant");
    Refrigerator fridge("Ran Yi Wang", "medal", "grey", OFF, 2);

    std::cout << "The elephant's info: "              << std::endl
              << "Name: "  << wyr.getName()           << std::endl
              << "Type: "  << wyr.getType()           << std::endl;

    std::cout << std::endl << "Refrigerator's info: " << std::endl;
    fridge.displayInfo();

    std::cout << std::endl;
    Refrigerator::openDoor();
    wyr.trumpet();
    wyr.walkTo(fridge.getName());
    Refrigerator::closeDoor();

    return 0;
}
