#include<stdlib.h>
#include "dog.h"
/**
 * print_dog - init dog name
 * @d: struct source
 * Description:  function that initialize a variable of type struct dog
 */
void print_dog(struct dog *d)
{
char *name;
float age;
char *owner;

if (d)
{
name = (d->name) ? d->name : (d->name = "(nil)");
age = (d->age);
owner = (d->owner) ? d->owner : (d->name = "(nil)");
printf("Name: %s\n", name);
printf("Age: %f\n", age);
printf("Owner: %s\n", owner);
}
}
