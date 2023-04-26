#include "shell.h"

/**
  * _getenv - Gets an environment variable
  * @name: The variable to find in the system environment
  *
  * Return: The content of the environment variable
  */
char *_getenv(const char *name)
{
	int a = 0;
	char *env_var = NULL;

	while (environ[a])
	{
		if (_strncmp(name, environ[a], _strlen(name)) == 0)
		{
			env_var = _strdup(environ[a]);
			while (*env_var != '=')
				env_var++;

			++env_var;
			return (env_var);
		}
		a++;
	}

	return (NULL);
}
