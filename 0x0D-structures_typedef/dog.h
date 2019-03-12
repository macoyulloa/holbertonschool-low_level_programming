#ifndef DOG1
#define DOG1
/**
 * struct dog - structure.
 *
 * @name: string input
 * @age: string input
 * @owner: string input
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
