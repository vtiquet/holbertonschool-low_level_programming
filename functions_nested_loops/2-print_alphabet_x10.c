#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
int i = 0;
char letter;
while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
i++;
}
}
