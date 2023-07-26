#include "shell.h"

/**
*checker - checks a built-in function-working
*@cmd: tokenized user input-working
*@buf: line derived from the getline function-working
*Return: 1 if command is executed, 0 if command is not executed-working
*/

int checker(char **cmd, char *buf)
{
if (handle_builtin(cmd, buf))
return (1);
else if (**cmd == '/')
{
execution(cmd[0], cmd);
return (1);
}
return (0);
}
