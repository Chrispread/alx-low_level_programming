#include "main.h"
/**
 * main - print _putchar followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
