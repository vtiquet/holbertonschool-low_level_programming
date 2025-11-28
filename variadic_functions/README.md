<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. Beauty is variable, ugliness is constant](#subparagraph0)
  - [1. To be is to be the value of a variable](#subparagraph1)
  - [2. One woman's constant is another woman's variable](#subparagraph2)
  - [3. To be is a to be the value of a variable](#subparagraph3)
  - [4. Real programmers can write assembly code in any language](#subparagraph4)

## Resources
### Read or watch:
* [stdarg.h](/rltoken/gyP9q81fzXR7FIeHScaKyw)
* [Variadic Functions](/rltoken/ploSYGvJmS6umd87DoWk8w)
* [Const Keyword](/rltoken/8IGI7fBTuIOm1T-2BAUDIg)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are variadic functions
* How to useva_start,va_argandva_endmacros
* Why and how to use theconsttype qualifier

## Requirements
### General
* Allowed editors:vi,vim,emacs
* All your files will be compiled on Ubuntu 20.04 LTS usinggcc, using the options-Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* AREADME.mdfile, at the root of the folder of the project is mandatory
* Your code should use theBettystyle. It will be checked usingbetty-style.plandbetty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed aremalloc,freeandexit. Any use of functions likeprintf,puts,calloc,reallocetc… is forbidden
* You are allowed to use the following macros:va_start,va_argandva_end
* You are allowed to use_putchar
* You don’t have to push_putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, themain.cfiles are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our ownmain.cfiles at compilation. Ourmain.cfiles might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function_putcharshould be included in your header file calledvariadic_functions.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Task
### 0. Beauty is variable, ugliness is constant <a name='subparagraph0'></a>

Write a function that returns the sum of all its parameters.

* Prototype: <code>int sum_them_all(const unsigned int n, ...);</code>
* If <code>n == 0</code>, return <code>0</code>

```
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$
```

---

### 1. To be is to be the value of a variable <a name='subparagraph1'></a>

Write a function that prints numbers, followed by a new line.

* Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code>
* where <code>separator</code> is the string to be printed between numbers
* and <code>n</code> is the number of integers passed to the function
* You are allowed to use <code>printf</code>
* If <code>separator</code> is <code>NULL</code>, don’t print it
* Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$
```

---

### 2. One woman's constant is another woman's variable <a name='subparagraph2'></a>

Write a function that prints strings, followed by a new line.

* Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code>
* where <code>separator</code> is the string to be printed between the strings
* and <code>n</code> is the number of strings passed to the function
* You are allowed to use <code>printf</code>
* If separator is NULL, don’t print it
* If one of the string is NULL, print <code>(nil)</code> instead
* Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$
```

---

### 3. To be is a to be the value of a variable <a name='subparagraph3'></a>

Write a function that prints anything.

* Prototype: <code>void print_all(const char * const format, ...);</code>
* where <code>format</code> is a list of types of arguments passed to the function


  * <code>c</code>: <code>char</code>
  * <code>i</code>: <code>integer</code>
  * <code>f</code>: <code>float</code>
  * <code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead
  * any other char should be ignored
  * see example
* You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code>
* You can use a maximum of


  * 2 <code>while</code> loops
  * 2 <code>if</code>
* You can declare a maximum of <code>9</code> variables
* You are allowed to use <code>printf</code>
* Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
B, 3, stSchool
julien@ubuntu:~/0x0f. Variadic functions$
```

---

### 4. Real programmers can write assembly code in any language <a name='subparagraph4'></a>

Write a 64-bit program in assembly that prints <code>Hello, World</code>, followed by a new line.

* You are only allowed to use the system call <code>write</code> (use <code>int</code> or <code>syscall</code>, not a call)
* Your program will be compiled using <code>nasm</code> and <code>gcc</code> (as follows)

```
julien@ubuntu:~/0x0f. Variadic functions$ nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello
julien@ubuntu:~/0x0f. Variadic functions$ ./hello 
Hello, World
julien@ubuntu:~/0x0f. Variadic functions$
```

<code>Note:</code> GCC may display an error because it will soon remove this functionality from its environment. You can try to compile with

```
julien@ubuntu:~/0x0f. Variadic functions$ nasm -f elf64 100-hello_world.asm && ld -s -o 100-hello_world hello.o
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
