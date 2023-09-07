#include <stdio.h>
/**
* main -  prints the phrase
* Return: 0 if exited properly
*/
int main(void)
{
puts("size of a char: %d byte(s)", sizeof(char));
puts("size of an int: %d byte(s)", sizeof(int));
puts("size of a long int: %d byte(s)", sizeof(long int));
puts("size of a long long int: %d byte(s)", sizeof(long long int));
puts("size of a float: %d byte(s)", sizeof(float));
return (0);
}
