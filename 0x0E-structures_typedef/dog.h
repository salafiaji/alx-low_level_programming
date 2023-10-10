#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Define a new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Define a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef stuct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar (char c);
#endif
