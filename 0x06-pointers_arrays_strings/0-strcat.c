#include "main.h"

/**
 * _strcat - function
 * @dest: param
 * @src: param
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int blessing;
	int leo;

	for (blessing = 0; dest[blessing] != '\0'; blessing++)
	{
		;
	}
	for (leo = 0; src[leo] != 0; leo++)
	{
		dest[blessing] = src[leo];
		blessing++;
	}
	dest[blessing] = '\0';
	return (dest);
}
