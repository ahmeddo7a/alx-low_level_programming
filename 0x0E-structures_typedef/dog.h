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
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
/**
 * dog_t - typdef struct dog
 */
typedef struct dog dog_t;

#endif
