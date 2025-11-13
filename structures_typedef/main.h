#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(dog *d, char *name, float age, char *owner);

#endif
