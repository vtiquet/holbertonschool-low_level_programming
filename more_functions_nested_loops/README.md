<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. isupper](#subparagraph0)
  - [1. isdigit](#subparagraph1)
  - [2. Collaboration is multiplication](#subparagraph2)
  - [3. The numbers speak for themselves](#subparagraph3)
  - [4. I believe in numbers and signs](#subparagraph4)
  - [5. Numbers constitute the only universal language](#subparagraph5)
  - [6. The shortest distance between two points is a straight line](#subparagraph6)
  - [7. I feel like I am diagonally parked in a parallel universe](#subparagraph7)
  - [8. You are so much sunshine in every square inch](#subparagraph8)
  - [9. Fizz-Buzz](#subparagraph9)
  - [10. Triangles](#subparagraph10)
  - [11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic](#subparagraph11)
  - [12. Numbers have life; they're not just symbols on paper](#subparagraph12)

## Resources
### Read or watch:
* [Nested while loops](/rltoken/lnzT56HYlUClB0-yDfwiqw)
* [C - Functions](/rltoken/2kN-ndGQ_oAU_SD3xGeWLQ)
* [Learning to Program in C (Part 06)](/rltoken/xpQGxUCqMewY3qcbTU3NTw)
* [What is the purpose of a function prototype?](/rltoken/YPnJVLsDnQ2e-8vGci5fIw)
* [C - Header Files](/rltoken/gnZvo3oRJ5CR_LsKz8tzVA)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are thegccflags-Wall -Werror -pedantic -Wextra -std=gnu89
* What are header files and how to to use them with#include

## Requirements
### General
* Allowed editors:vi,vim,emacs
* All your files will be compiled on Ubuntu 20.04 LTS usinggcc, using the options-Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* AREADME.mdfile, at the root of the folder of the project is mandatory
* Your code should use theBettystyle. It will be checked usingbetty-style.plandbetty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions likeprintf,puts, etc… is forbidden
* You are allowed to use_putchar
* You don’t have to push_putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, themain.cfiles are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our ownmain.cfiles at compilation. Ourmain.cfiles might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function_putcharshould be included in your header file calledmain.h
* Don’t forget to push your header file

## Task
### 0. isupper <a name='subparagraph0'></a>

Write a function that checks for uppercase character.

* Prototype: <code>int _isupper(int c);</code>
* Returns <code>1</code> if <code>c</code> is uppercase
* Returns <code>0</code> otherwise

FYI: The standard library provides a similar function: <code>isupper</code>. Run <code>man isupper</code> to learn more.

```
julien@ubuntu:~/$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/$
```

---

### 1. isdigit <a name='subparagraph1'></a>

Write a function that checks for a digit (<code>0</code> through <code>9</code>).

* Prototype: <code>int _isdigit(int c);</code>
* Returns <code>1</code> if <code>c</code> is a digit
* Returns <code>0</code> otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```
julien@ubuntu:~/$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/$
```

---

### 2. Collaboration is multiplication <a name='subparagraph2'></a>

Write a function that multiplies two integers.

* Prototype: <code>int mul(int a, int b);</code>

```
julien@ubuntu:~/$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/$ ./2-mul 
100352
-1646592
julien@ubuntu:~/$
```

---

### 3. The numbers speak for themselves <a name='subparagraph3'></a>

Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.

* Prototype: <code>void print_numbers(void);</code>
* You can only use <code>_putchar</code> twice in your code

```
julien@ubuntu:~/$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/$
```

---

### 4. I believe in numbers and signs <a name='subparagraph4'></a>

Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.

* Prototype: <code>void print_most_numbers(void);</code>
* Do not print <code>2</code> and <code>4</code>
* You can only use <code>_putchar</code> twice in your code

```
julien@ubuntu:~/$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/$
```

---

### 5. Numbers constitute the only universal language <a name='subparagraph5'></a>

Write a function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.

* Prototype: <code>void more_numbers(void);</code>
* You can only use <code>_putchar</code> three times in your code

```
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/
```

---

### 6. The shortest distance between two points is a straight line <a name='subparagraph6'></a>

Write a function that draws a straight line in the terminal.

* Prototype: <code>void print_line(int n);</code>
* You can only use <code>_putchar</code> function to print
* Where <code>n</code> is the number of times the character <code>_</code> should be printed
* The line should end with a <code>\n</code>
* If <code>n</code> is <code>0</code> or less, the function should only print <code>\n</code>

```
julien@ubuntu:~/$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/$
```

---

### 7. I feel like I am diagonally parked in a parallel universe <a name='subparagraph7'></a>

Write a function that draws a diagonal line on the terminal.

* Prototype: <code>void print_diagonal(int n);</code>
* You can only use <code>_putchar</code> function to print
* Where <code>n</code> is the number of times the character <code>\</code> should be printed
* The diagonal should end with a <code>\n</code>
* If <code>n</code> is <code>0</code> or less, the function should only print a <code>\n</code>

```
julien@ubuntu:~/$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/$
```

---

### 8. You are so much sunshine in every square inch <a name='subparagraph8'></a>

Write a function that prints a square, followed by a new line.

* Prototype: <code>void print_square(int size);</code>
* You can only use <code>_putchar</code> function to print
* Where <code>size</code> is the size of the square
* If <code>size</code> is <code>0</code> or less, the function should print only a new line
* Use the character <code>#</code> to print the square

```
julien@ubuntu:~/$ cat 8-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/$
```

---

### 9. Fizz-Buzz <a name='subparagraph9'></a>

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.

* Each number or word should be separated by a space
* You are allowed to use the standard library

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/$
```

---

### 10. Triangles <a name='subparagraph10'></a>

Write a function that prints a triangle, followed by a new line.

* Prototype: <code>void print_triangle(int size);</code>
* You can only use <code>_putchar</code> function to print
* Where <code>size</code> is the size of the triangle
* If <code>size</code> is <code>0</code> or less, the function should print only a new line
* Use the character <code>#</code> to print the triangle

```
julien@ubuntu:~/$ cat 10-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/$
```

---

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic <a name='subparagraph11'></a>

The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>.

Write a program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.

* You are allowed to use the standard library
* Your program will be compiled with this command: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm</code>

---

### 12. Numbers have life; they're not just symbols on paper <a name='subparagraph12'></a>

Write a function that prints an integer.

* Prototype: <code>void print_number(int n);</code>
* You can only use <code>_putchar</code> function to print
* You are not allowed to use <code>long</code>
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

```
julien@ubuntu:~/$ cat 101-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
