#include "main"

/**
 * main - Entry point
 * Return: always o
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return(0);
}

