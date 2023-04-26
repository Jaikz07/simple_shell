#include "shell.h"

/**
  * count_input - Counts the words typed by the user
  * @str: The string that contains the words
  *
  * Return: The number of words found in the string
  */
int count_input(char *str)
{
	int a = 0, b = 0, state = 0;

	while (str[a])
	{
		if (str[a] == ' ' || str[a] == '\n' || str[a] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			b++;
		}

		a++;
	}

	return (b);
}

/**
  * count_delims - Counts delimiters in a string
  * @str: The string that contains the delimiters
  * @del: The delimiters to will find in the string
  *
  * Return: The number of delimiters in the string
  */
int count_delims(char *str, char *del)
{
	int a = 0, c = 0, b = 0;

	while (del[a])
	{
		c = 0;
		while (str[c])
		{
			if (str[c] == del[a])
				b++;
			c++;
		}
		a++;
	}

	return (b);
}
