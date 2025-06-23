#include "main.h"
/**
* print_most_numbers - prints the numbers.
*/
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)  
putchar(n);
}
putchar('\n');
return (0);
}
