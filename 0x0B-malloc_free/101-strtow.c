#include "main.h"
#include <stdlib.h>

int _length(char *s), _words(char *s);
char **strtow(char *s);

/**
 * _length - Locates the index
 * @s: parameter.
 *
 * Return: The index
 */
int _length(char *s)
{
	int i = 0;
	int j = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * _words - Counts the number of words
 * @s: The parameter
 *
 * Return: The number of words
 */
int _words(char *s)
{
	int i = 0, words = 0, j = 0;

	for (i = 0; *(s + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(s + i) != ' ')
		{
			words++;
			i += _length(s + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: char
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = _words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	w = 0;
	while (w < words)
	{
		while (str[index] == ' ')
			index++;

		letters = _length(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
		w++;
	}
	strings[w] = NULL;

	return (strings);
}
