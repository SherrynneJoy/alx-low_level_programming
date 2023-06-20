#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: person who the dog belongs to
 *
 * Description: this structure shows the characteristics of a dog
 */

struct dog {

	char *name;
	float age;
	char *owner;
}my_dog;

/**
 * dog_t - typedef for a new type of dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
