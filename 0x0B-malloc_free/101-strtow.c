#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: String
 * Return: Pointer to an array of words or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int word_c, word_s, word_l, h, b;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_c = count_words(str);

	words = malloc(sizeof(char *) * (word_c + 1));
	if (words == NULL)
		return (NULL);

	for (h = 0, word_s = 0; h < word_c; h++)
	{
		while (str[word_s] == ' ')
			word_s++;

		word_l = get_word_length(&str[word_s]);

		if (word_l == 0)
			break;

		words[h] = copy_word(&str[word_s], word_l);

		if (words[h] == NULL)
		{
			for (b = 0; b < h; b++)
				free(words[b]);
			free(words);
			return (NULL);
		}

		word_s += word_l;
	}

	words[h] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: string to count words in
 * Return: number of words in str
 */

int count_words(char *str)
{
	int b, count = 0;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * get_word_length - Gets the length of a word
 * @str: String containing the word
 * Return: Length of the word
 */

int get_word_length(char *str)
{
	int b, length = 0;

	for (b = 0; str[b] != '\0' && str[b] != ' '; b++)
		length++;

	return (length);
}

/**
 * copy_word - Copies a word from a string
 * @str: String containing the word
 * @word_length: Length of the word
 * Return: pointer to the new memory location containing the word
 */

char *copy_word(char *str, int word_length)
{
	char *word;
	int b;

	word = malloc(sizeof(char) * (word_length + 1));
	if (word == NULL)
		return (NULL);

	for (b = 0; b < word_length; b++)
		word[b] = str[b];

	word[b] = '\0';

	return (word);
}
