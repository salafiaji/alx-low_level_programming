#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Define a new type struct dog
 * @name: first
 * @age: second
 * @owner: third
 *
 * Description: Define a new type struct dog
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
