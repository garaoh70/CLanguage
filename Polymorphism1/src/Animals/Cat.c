#include "Cat.h"

static const char* Name()
{
    return "ねこ";
}

static const char* Speak()
{
    return "ニャーニャー";
}

void InitCat(Animal* animal)
{
    animal->name = Name;
    animal->speak = Speak;
}