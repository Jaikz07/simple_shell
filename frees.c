#include "shell.h"

/**
  * frees_get_env - Frees memory
  * @env_path: The environment variable to frees
  *
  * Return: Nothing to returns
  */
void frees_get_env(char *env_path)
{
	int a;

	for (a = 4; a >= 0; a--)
		env_path--;

	free(env_path);
}

/**
  * frees_tokens - ...
  * @tokns: ...
  *
  * Return: Nothing to returns
  */
void frees_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}
