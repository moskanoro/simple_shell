#include "shell.h"

/**
 * print_env - Prints the environment string to the standard output-working.
 * Return: void
 */
void print_env(void)
{
int i = 0;
char **env = environ;

while (env[i])
{
write(STDOUT_FILENO, env[i], _strlen(env[i]));
write(STDOUT_FILENO, "\n", 1);
i++;
}
}
