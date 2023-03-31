#include "main.h"

/**
 * string_toupper - function
 * @leo: param
 * Return: leo
 */

char *string_toupper(char *leo)
{
	int blessing = 0;

	while (leo[blessing] != '\0')
	{
		if (leo[blessing] >= 'a' && leo[blessing] <= 'z')
		{
			leo[blessing] -= 'a' - 'A';
		}
		blessing++;
	}
	return (leo);
}
