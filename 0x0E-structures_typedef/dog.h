#ifndef DOG_H
#define DOG_H
/**
 * struct_dog - infor for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: feeds the dog
 *
 * Description: longer description
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};
/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *ownder);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
