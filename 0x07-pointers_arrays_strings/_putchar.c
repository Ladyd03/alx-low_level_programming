#include "main.h"
#include <unistd.h>

/*
 * _putchar - This write the character c to stdout
 * @c: The character to be print
 *
 * Return: 1 on success.
 * On error,returns -1,and errno is appropriately set.
 */
int _putchar(char c)
{	
	return(write(1, &c, 1));

}
