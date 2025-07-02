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
  int count, n1, n2 = 1;

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
		n1 = atoi(argv[count]);
		n2 = n2 * n1;
	}

		printf("%d\n", n2);
    }
  else
    {
      printf("Error\n");
	  return (1);
    }

  return (0);
}
