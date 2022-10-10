#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: a pointer to a struct dog
* @name: name of new variable
* @age: age of dog
* @owner: name of owner
* Retuen: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;

}
