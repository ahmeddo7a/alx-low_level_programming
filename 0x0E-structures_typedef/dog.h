#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog info
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: Dog INFo
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typdef struct dog
 */
typedef struct dog dog_t;

#endif
