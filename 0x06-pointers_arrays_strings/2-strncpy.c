#include "main.h"

/**
 * _strncpy - function
 * @dest: param
 * @src: param
 * @n: param
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int blessing;

	for (blessing = 0; blessing < n && src[blessing] != '\0'; blessing++)
	{
		dest[blessing] = src[blessing];
	}
	for (; n > blessing; blessing++)
	{
		dest[blessing] = '\0';
	}
	return (dest);
}
