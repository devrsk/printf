#include <unistd.h>
/**
 * author: Raheem and 
 * _putchar - prints the character c
 * @c: The character to print
 * Return: The character printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
