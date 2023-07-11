#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	array = malloc(sizeof(char) * (i + j + 1));

	if (array == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		i++, j++;
	}
	array[i] = '\0';
	return (array);
}
