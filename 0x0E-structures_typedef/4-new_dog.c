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
	int length;
	
	length = 0;
	
	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);
	
	while (name[length] != '\0')
	       ++length;
	
	dog -> name = malloc(sizeof(char) * length);
	dog -> age = malloc(sizeof(float));
		
	length = 0;
	
	while (owner[length] != '\0')
	       ++length;
	
	dog -> owner = malloc(sizeof(char) * length);
		
	dog -> name = name;
	dog -> age = age;
	dog -> owner = owner;
	
	return (dog);
	
}
