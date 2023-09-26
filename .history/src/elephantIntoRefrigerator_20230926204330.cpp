#include "elephant.h"
#include "refrigerator.h"

int main()
{
    Elephant wyr("Wang Yi Ran", "NAO elephant");
    Refrigerator fridge("Ran Yi Wang", "medal", "grey", OFF, 2);

    fridge.openDoor();
    wyr.trumpet();
    wyr.walkTo(fridge.getName());
    fridge.closeDoor();
}
