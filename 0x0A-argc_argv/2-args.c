#include <stdio.h>
/**
 * main - print all arguments
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
