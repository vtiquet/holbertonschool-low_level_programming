<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](#subparagraph0)
  - [1. Why is it so important to dream? Because, in my dreams we are together](#subparagraph1)
  - [2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](#subparagraph2)
  - [3. You mustn't be afraid to dream a little bigger, darling](#subparagraph3)
  - [4. Once an idea has taken hold of the brain it's almost impossible to eradicate](#subparagraph4)
  - [5. Your subconscious is looking for the dreamer](#subparagraph5)
  - [6. Inception. Is it possible?](#subparagraph6)

## Resources
### Read or watch:
* [Recursion, introduction](/rltoken/RZZmKmQJAnyqS_Ci1fFy2A)
* [What on Earth is Recursion?](/rltoken/2W6GbB5XNktHDrjqoRPy2g)
* [C - Recursion](/rltoken/DC8k2o4fIaE379ozY_Gl1A)
* [C Programming Tutorial 85, Recursion pt.1](/rltoken/z4N9mWZKHoonkjFmeA2moA)
* [C Programming Tutorial 86, Recursion pt.2](/rltoken/IOJxRGq3Ts8lNhR2IWwCnA)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

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
* You are not allowed to use any kind of loops
* You are not allowed to usestaticvariables

## Task
### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget <a name='subparagraph0'></a>

Write a function that prints a string, followed by a new line.

* Prototype: <code>void _puts_recursion(char *s);</code>

FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.

```
julien@ubuntu:~/Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/Recursion$
```

---

### 1. Why is it so important to dream? Because, in my dreams we are together <a name='subparagraph1'></a>

Write a function that prints a string in reverse.

* Prototype: <code>void _print_rev_recursion(char *s);</code>

```
julien@ubuntu:~/Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/Recursion$
```

---

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange <a name='subparagraph2'></a>

Write a function that returns the length of a string.

* Prototype: <code>int _strlen_recursion(char *s);</code>

FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.

```
julien@ubuntu:~/Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/Recursion$
```

---

### 3. You mustn't be afraid to dream a little bigger, darling <a name='subparagraph3'></a>

Write a function that returns the factorial of a given number.

* Prototype: <code>int factorial(int n);</code><br/>
* If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br/>
* Factorial of <code>0</code> is <code>1</code>

```
julien@ubuntu:~/Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/Recursion$
```

---

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate <a name='subparagraph4'></a>

Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.

* Prototype: <code>int _pow_recursion(int x, int y);</code><br/>
* If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code>

FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.

```
julien@ubuntu:~/Recursion$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/Recursion$
```

---

### 5. Your subconscious is looking for the dreamer <a name='subparagraph5'></a>

Write a function that returns the natural square root of a number.

* Prototype: <code>int _sqrt_recursion(int n);</code><br/>
* If <code>n</code> does not have a natural square root, the function should return <code>-1</code>

FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.

```
julien@ubuntu:~/Recursion$ cat 5-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/Recursion$
```

---

### 6. Inception. Is it possible? <a name='subparagraph6'></a>

Write a function that returns <code>1</code> if the input integer is a <a href="/rltoken/hlTQsmjMQmfHqTYQct3-uA" target="_blank" title="prime number">prime number</a>, otherwise return <code>0</code>.

* Prototype: <code>int is_prime_number(int n);</code>

```
julien@ubuntu:~/Recursion$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/Recursion$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
