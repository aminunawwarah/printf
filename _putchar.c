#include <unistd.h>
/**
 * _putchar - writes the passed character to output
 * @c: parameter for the character
 * Return: 0 on success and -1 error and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}