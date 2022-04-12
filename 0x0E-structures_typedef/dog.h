#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Description: all information about a dog
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
