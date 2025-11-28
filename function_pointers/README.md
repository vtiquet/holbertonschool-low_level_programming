<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. What's my name](#subparagraph0)
  - [1. If you spend too much time thinking about a thing, you'll never get it done](#subparagraph1)
  - [2. To hell with circumstances; I create opportunities](#subparagraph2)
  - [3. A goal is not always meant to be reached, it often serves simply as something to aim at](#subparagraph3)
  - [4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker](#subparagraph4)

## Resources
### Read or watch:
* [Function Pointer in C](/rltoken/sXLp2KFv2xf0qBO8xX5B1A)
* [Pointers to functions](/rltoken/zH2EY_rooZFB4zyN7gRFEQ)
* [Function Pointers in C / C++](/rltoken/ZMt6k0RrDVvF3WeLK2Wllw)
* [why pointers to functions?](/rltoken/61rj01NJ8P7cBMd8m6Sm7w)
* [Everything you need to know about pointers in C](/rltoken/Z0tUxkCEq-2HssDEnN0bsg)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

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
* You are allowed to use_putchar
* You don’t have to push_putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, themain.cfiles are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our ownmain.cfiles at compilation. Ourmain.cfiles might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function_putcharshould be included in your header file calledfunction_pointers.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Task
### 0. What's my name <a name='subparagraph0'></a>

Write a function that prints a name.

* Prototype: <code>void print_name(char *name, void (*f)(char *));</code>

```
julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$
```

---

### 1. If you spend too much time thinking about a thing, you'll never get it done <a name='subparagraph1'></a>

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code>
* where <code>size</code> is the size of the array
* and <code>action</code> is a pointer to the function you need to use

```
julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$
```

---

### 2. To hell with circumstances; I create opportunities <a name='subparagraph2'></a>

Write a function that searches for an integer.

* Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code>
* where <code>size</code> is the number of elements in the array <code>array</code>
* <code>cmp</code> is a pointer to the function to be used to compare values
* <code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code>
* If no element matches, return <code>-1</code>
* If size <= <code>0</code>, return <code>-1</code>

```
julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
julien@ubuntu:~/0x0e. Function pointers$
```

---

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at <a name='subparagraph3'></a>

Write a program that performs simple operations.

* You are allowed to use the standard library
* Usage: <code>calc num1 operator num2</code>
* You can assume <code>num1</code> and <code>num2</code> are integers, so use the <code>atoi</code> function to convert them from the string input to <code>int</code>
* <code>operator</code> is one of the following:


  * <code>+</code>: addition
  * <code>-</code>: subtraction
  * <code>*</code>: multiplication
  * <code>/</code>: division
  * <code>%</code>: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an <code>int</code>
* if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code>
* if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code>
* if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code>

This task requires that you create four different files.

<strong>3-calc.h</strong>

This file should contain all the function prototypes and data structures used by the program.
You can use this structure:

```
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

<strong>3-op_functions.c</strong>

This file should contain the 5 following functions (not more):

* <code>op_add</code>: returns the sum of <code>a</code> and <code>b</code>. Prototype: <code>int op_add(int a, int b);</code>
* <code>op_sub</code>: returns the difference of <code>a</code> and <code>b</code>. Prototype: <code>int op_sub(int a, int b);</code>
* <code>op_mul</code>: returns the product of <code>a</code> and <code>b</code>. Prototype: <code>int op_mul(int a, int b);</code>
* <code>op_div</code>: returns the result of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_div(int a, int b);</code>
* <code>op_mod</code>: returns the remainder of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_mod(int a, int b);</code>

<strong>3-get_op_func.c</strong>

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

* Prototype: <code>int (*get_op_func(char *s))(int, int);</code>
* where <code>s</code> is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code>get_op_func("+")</code> should return a pointer to the function <code>op_add</code>
* You are not allowed to use <code>switch</code> statements
* You are not allowed to use <code>for</code> or <code>do ... while</code> loops
* You are not allowed to use <code>goto</code>
* You are not allowed to use <code>else</code>
* You are not allowed to use more than one <code>if</code> statement in your code
* You are not allowed to use more than one <code>while</code> loop in your code
* If <code>s</code> does not match any of the 5 expected operators (<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>, <code>%</code>), return <code>NULL</code>
* You are only allowed to declare these two variables in this function:

```
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
```

<strong>3-main.c</strong>

This file should contain your <code>main</code> function only.

* You are not allowed to code any other function than <code>main</code> in this file
* You are not allowed to directly call <code>op_add</code>, <code>op_sub</code>, <code>op_mul</code>, <code>op_div</code> or <code>op_mod</code> from the <code>main</code> function
* You have to use <code>atoi</code> to convert arguments to <code>int</code>
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 <code>if</code> statements

<strong>Compilation and examples</strong>

```
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
julien@ubuntu:~/0x0e. Function pointers$
```

---

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker <a name='subparagraph4'></a>

Write a program that prints the <a href="/rltoken/uXJED-Eq4fo_cqCegjGyaQ" target="_blank" title="opcodes">opcodes</a> of its own main function.

* Usage: <code>./main number_of_bytes</code>
* Output format:


  * the opcodes should be printed in hexadecimal, lowercase
  * each opcode is two char long
  * listing ends with a new line
  * see example
* You are allowed to use <code>printf</code> and <code>atoi</code>
* You have to use <code>atoi</code> to convert the argument to an <code>int</code>
* If the number of argument is not the correct one, print <code>Error</code>, followed by a new line, and exit with the status <code>1</code>
* If the number of bytes is negative, print <code>Error</code>, followed by a new line, and exit with the status <code>2</code>
* You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance <a href="/rltoken/poSZ1rGFaDYBs6rLHfSdiw" target="_blank" title="udcli">udcli</a>.

```
julien@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main
julien@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
julien@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
julien@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f             
julien@ubuntu:~/0x0e. Function pointers$
```

* <em>Note 0: <code>je</code> is equivalent to <code>jz</code></em>
* <em>Note 1: depending on how you write your <code>main</code> function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example</em>

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
