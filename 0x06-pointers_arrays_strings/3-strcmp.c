#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *Return: - or + or 0
 */
int _strcmp(char *s1, char *s2)
{
	int leo = 0;
	int blessing;

	while (s1[leo] == s2[leo] && s1[leo] != '\0')
	{
		leo++;
	}

	blessing = s1[leo] - s2[leo];
	return (blessing);
}
