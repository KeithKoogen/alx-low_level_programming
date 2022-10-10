#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: name of dogs owner
* Return: a pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	
	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);
	
	
	
	dog -> name = name;
	dog -> age = age;
	dog -> owner = owner;
	
	return (dog);
	
}
