#include "shell.h"

/**
 * handle_signal - keeps track of interactive mode in
 * @m: the signal number-working
 * Return: void
 */

void handle_signal(int m)
{
(void)m;
write(STDERR_FILENO, "\n", 1);
write(STDERR_FILENO, "$ ", 2);
}
