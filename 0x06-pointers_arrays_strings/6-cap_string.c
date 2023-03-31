#include "main.h"

/**
 * cap_string - function
 * @blessing: param
 * Return: blessing
 */

char *cap_string(char *blessing)
{
	int leo = 0;

	while (blessing[leo] != '\0')
	{
		if (blessing[0] >= 97 && blessing[0] <= 122)
		{
			blessing[0] = blessing[0] - 32;
		}
		if (blessing[leo] == ' ' || blessing[leo] == '\t' || blessing[leo] == '\n'
		    || blessing[leo] == ',' || blessing[leo] == ';' || blessing[leo] == '.'
		    || blessing[leo] == '.' || blessing[leo] == '!' || blessing[leo] == '?'
		    || blessing[leo] == '"' || blessing[leo] == '(' || blessing[leo] == ')'
		    || blessing[leo] == '{' || blessing[leo] == '}')
		{
			if (blessing[leo + 1] >= 97 && blessing[leo + 1] <= 122)
			{
				blessing[leo + 1] = blessing[leo + 1] - 32;
			}
		}
		leo++;
	}
	return (blessing);
}
