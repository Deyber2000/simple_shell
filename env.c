#include "shell.h"

/**
 * func_env - print the environment variables
 * @env: array with environment varables
 **/
void func_env(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		_puts(env[i]);
		_puts("\n");
	}
}
