#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - a structure that defines elements
 * @name: name element in string
 * @age: age element
 * @owner: owner element as a string
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
