#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i1, i2, n1, n2 = 0;

	if (argc > 1)
	{
		for (i1 = 1; i1 < argc; i1++)
		{
			for (i2 = 0; argv[i1][i2] != '\0'; i2++)
			{
				if (!isdigit(argv[i1][i2]))
				{
					printf("Error\n");
					return (1);
				}
				n1 = atoi(argv[i1]);
				n2 = n2 + n1;
			}
		}
		printf("%d\n", n2);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
