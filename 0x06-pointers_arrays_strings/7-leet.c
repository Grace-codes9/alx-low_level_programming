#include "main.h"

/**
 * leet - function
 * @blessing: param
 * Return: blessing
 */

char *leet(char *blessing)
{
	int a = 0;
	int b;
	char leo[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char ola[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (blessing[a])
	{
		for (b = 0; b < 10; b++)
		{
			if (blessing[a] == ola[b])
			{
				blessing[a] = leo[b];
			}
		}
		a++;
	}
	return (blessing);
}
