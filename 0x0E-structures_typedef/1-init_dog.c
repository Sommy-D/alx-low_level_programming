#include "dog.h"
/**
 * init_dog -> initialiaze a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: dog age
 * @owner: pointer to char owner's dog
 * Return: No
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
