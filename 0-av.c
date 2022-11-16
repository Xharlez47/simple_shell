#include <unistd.h>
#include <stdio.h>

/**
 * main - prints a arument
 * @argc: numbers of arguments
 * @argv: index position of the arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), const char *argv[])
{
	unsigned int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}
