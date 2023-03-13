#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

<<<<<<< HEAD
	while (dup[i] = str[i]) != '\0'){
		++;
=======
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
>>>>>>> e564940cca9e3add649e74bc10016e81cfb06757

	return (dup);
}
