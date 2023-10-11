#include "main.h"		
#include <stdlib.h>
		
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)

{

	char *conct;
	int i, ci;

		
	if (b1 == NULL)	
		b1 = "";

	if (b2 == NULL)	
		b2 = "";


		i = ci = 0;

	while (b1[i] != '\0')
		i++;

	while (b2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));


	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')

	{
		conct[i] = s1[i];
		i++;

	}

	while (s2[ci] != '\0')

	{

		conct[i] = s2[ci];
		i++, ci++;

	}

	conct[i] = '\0';

	return (conct);
}
