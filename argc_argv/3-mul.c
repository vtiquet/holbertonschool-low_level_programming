#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, n1, n2 = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n1 = atoi(argv[i]);
			n2 = n2 * n1;
		}
		printf("%d\n", n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
