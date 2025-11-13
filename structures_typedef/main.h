#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * struct dog - information about a dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
