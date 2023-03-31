#include "main.h"

/**
 * _strncat - function
 * @dest: param
 * @src: param
 * @n: param
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int blessing;
	int leo;

	for (blessing = 0; dest[blessing] != '\0'; blessing++)
	{
		;
	}
	for (leo = 0; src[leo] != '\0' && n > 0; leo++, n--, blessing++)
	{
		dest[blessing] = src[leo];
	}
	return (dest);
}
