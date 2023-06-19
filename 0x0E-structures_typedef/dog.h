#ifndef DOG_H

#define DOG_H

int main(void);

/**
 * dog - structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: person who the dog belongs to
 */

struct dog {

	char *name;
	float age;
	char *owner;
};

#endif
