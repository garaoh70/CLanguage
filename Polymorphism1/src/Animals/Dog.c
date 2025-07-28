#include "Dog.h"

static const char* Name()
{
    return "いぬ";
}

static const char* Speak()
{
    return "ワンワン";
}

void InitDog(Animal* animal)
{
    animal->name = Name;
    animal->speak = Speak;
}