#include "shell.h"

/**
 * free_buffers - frees the memory allocated for buffers-done
 * @buffers: buffer to be freed-working-well
 * Return: void
 */
void free_buffers(char **buffers)
{
int x = 0;

if (!buffers || buffers == NULL)
return;

while (buffers[x])
{
free(buffers[x]);
x++;
}

free(buffers);
}
