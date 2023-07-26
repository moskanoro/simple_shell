#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s:character of string
 * be a good software engineer
 * Return: 0
 */
int _strlen(char *s)
{
int j = 0;

while (*s != '\0')
{
j++;
s++;
}
return (j);
}
