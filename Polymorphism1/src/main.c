#include <stdio.h>
#include "Animals/Animal.h"
#include "Animals/Cat.h"
#include "Animals/Dog.h"

int main()
{
    Animal animal[2];
    InitCat(animal);
    InitDog(animal+1);

    for(int i=0; i<2; i++)
    {
        printf("%s: %s\n", animal[i].name(), animal[i].speak());
    }

    return 0;
}