#include <stdio.h>

/**
 * main - Prints out storage of the below datatypes.
 * Return: 0 if success.
 */
int main(void)
{
	/*varables delaration*/

	int intType;
	float floatType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	/*sizeof evaluates the size of a variable*/

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	/*main() function return value*/
	return (0);
}
