#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Define a new type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Desc - Structure
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
