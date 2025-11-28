<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. Battery st.](#subparagraph0)
  - [1. Don't swap horses in crossing a stream](#subparagraph1)
  - [2. This report, by its very length, defends itself against the risk of being read](#subparagraph2)
  - [3. I do not fear computers. I fear the lack of them](#subparagraph3)
  - [4. I can only go one way. I've not got a reverse gear](#subparagraph4)
  - [5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](#subparagraph5)
  - [6. Half the lies they tell about me aren't true](#subparagraph6)
  - [7. Winning is only half of it. Having fun is the other half](#subparagraph7)
  - [8. Arrays are not pointers](#subparagraph8)
  - [9. strcpy](#subparagraph9)
  - [10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](#subparagraph10)
  - [11. Don't hate the hacker, hate the code](#subparagraph11)

## Resources
### Read or watch:
* [C - Arrays](/rltoken/1PQnbj1BHB7w_mKhxhMWdg)
* [C - Pointers](/rltoken/G2_eTEuCaSAXfKYuEteXfQ)
* [C - Strings](/rltoken/N7AFmcH2JyKF35ly2RH1Uw)
* [Memory Layout](/rltoken/6MlL0ucmD6kNwXANZFZJEg)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

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
### 0. Battery st. <a name='subparagraph0'></a>

Write a function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.

* Prototype: <code>void reset_to_98(int *n);</code>

```
julien@ubuntu:~/$ cat 0-main.c
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

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/$ ./0-98 
n=402
n=98
julien@ubuntu:~/$
```

---

### 1. Don't swap horses in crossing a stream <a name='subparagraph1'></a>

Write a function that swaps the values of two integers.

* Prototype: <code>void swap_int(int *a, int *b);</code><br/>

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
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/$
```

---

### 2. This report, by its very length, defends itself against the risk of being read <a name='subparagraph2'></a>

Write a function that returns the length of a string.

* Prototype: <code>int _strlen(char *s);</code>

FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.

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
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/$ ./2-strlen 
16
julien@ubuntu:~/$
```

---

### 3. I do not fear computers. I fear the lack of them <a name='subparagraph3'></a>

Write a function that prints a string, followed by a new line, to <code>stdout</code>.

* Prototype: <code>void _puts(char *str);</code>

FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.

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
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/$
```

---

### 4. I can only go one way. I've not got a reverse gear <a name='subparagraph4'></a>

Write a function that prints a string, in reverse, followed by a new line.

* Prototype: <code>void print_rev(char *s);</code>

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
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/$
```

---

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes <a name='subparagraph5'></a>

Write a function that reverses a string.

* Prototype: <code>void rev_string(char *s);</code><br/>

```
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/$ ./5-rev_string 
My School
loohcS yM
julien@ubuntu:~/$
```

---

### 6. Half the lies they tell about me aren't true <a name='subparagraph6'></a>

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: <code>void puts2(char *str);</code>

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
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/$ ./6-puts2 
02468
julien@ubuntu:~/$
```

---

### 7. Winning is only half of it. Having fun is the other half <a name='subparagraph7'></a>

Write a function that prints half of a string, followed by a new line.

* Prototype: <code>void puts_half(char *str);</code>
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last <code>n</code> characters of the string, where <code>n = (length_of_the_string + 1) / 2</code>

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
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/$ ./7-puts_half 
56789
julien@ubuntu:~/$
```

---

### 8. Arrays are not pointers <a name='subparagraph8'></a>

Write a function that prints <code>n</code> elements of an array of integers, followed by a new line.

* Prototype: <code>void print_array(int *a, int n);</code><br/>
* where <code>n</code> is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use <code>printf</code>

```
julien@ubuntu:~/$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/$
```

---

### 9. strcpy <a name='subparagraph9'></a>

* Prototype: <code>char *_strcpy(char *dest, char *src);</code>

Write a function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.

* Return value: the pointer to <code>dest</code>

FYI: The standard library provides a similar function: <code>strcpy</code>. Run <code>man strcpy</code> to learn more.

```
julien@ubuntu:~/$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/$
```

---

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers <a name='subparagraph10'></a>

Write a function that convert a string to an integer.

* Prototype: <code>int _atoi(char *s);</code>
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the <code>-</code> and <code>+</code> signs before the number
* If there are no numbers in the string, the function must return <code>0</code>
* You are not allowed to use <code>long</code>
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the <code>-fsanitize=signed-integer-overflow</code> gcc flag to compile your code.

FYI: The standard library provides a similar function: <code>atoi</code>. Run <code>man atoi</code> to learn more.

```
julien@ubuntu:~/$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/$
```

---

### 11. Don't hate the hacker, hate the code <a name='subparagraph11'></a>

Create a program that generates random valid passwords for the program <a href="https://github.com/hs-hq/0x04.c" target="_blank" title="101-crackme">101-crackme</a>.

* You are allowed to use the standard library
* You don’t have to pass the <code>betty-style</code> tests (you still need to pass the <code>betty-doc</code> tests)
* man <code>srand</code>, <code>rand</code>, <code>time</code>
* <code>gdb</code> and <code>objdump</code> can help

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)

<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Requirements

## Table of Contents :

  - [0. strcat](#subparagraph0)
  - [1. strncat](#subparagraph1)
  - [2. strncpy](#subparagraph2)
  - [3. strcmp](#subparagraph3)
  - [4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](#subparagraph4)
  - [5. Always look up](#subparagraph5)
  - [6. Expect the best. Prepare for the worst. Capitalize on what comes](#subparagraph6)
  - [7. Mozart composed his music not for the elite, but for everybody](#subparagraph7)
  - [8. rot13](#subparagraph8)
  - [9. Numbers have life; they're not just symbols on paper](#subparagraph9)
  - [10. A dream doesn't become reality through magic; it takes sweat, determination and hard work](#subparagraph10)
  - [11. It is the addition of strangeness to beauty that constitutes the romantic character in art](#subparagraph11)
  - [12. Noise is a buffer, more effective than cubicles or booth walls](#subparagraph12)

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
### 0. strcat <a name='subparagraph0'></a>

Write a function that concatenates two strings.

* Prototype: <code>char *_strcat(char *dest, char *src);</code>
* This function appends the <code>src</code> string to the <code>dest</code> string, overwriting the terminating null byte (<code>\0</code>) at the end of <code>dest</code>, and then adds a terminating null byte
* Returns a pointer to the resulting string <code>dest</code>

FYI: The standard library provides a similar function: <code>strcat</code>. Run <code>man strcat</code> to learn more.

```
julien@ubuntu:~/$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/$
```

---

### 1. strncat <a name='subparagraph1'></a>

Write a function that concatenates two strings.

* Prototype: <code>char *_strncat(char *dest, char *src, int n);</code>
* The <code>_strncat</code> function is similar to the <code>_strcat</code> function, except that


  * it will use at most <code>n</code> bytes from <code>src</code>; and
  * <code>src</code> does not need to be null-terminated if it contains <code>n</code> or more bytes
* Return a pointer to the resulting string <code>dest</code>

FYI: The standard library provides a similar function: <code>strncat</code>. Run <code>man strncat</code> to learn more.

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
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/$
```

---

### 2. strncpy <a name='subparagraph2'></a>

Write a function that copies a string.

* Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code><br/>
* Your function should work exactly like <code>strncpy</code>

FYI: The standard library provides a similar function: <code>strncpy</code>. Run <code>man strncpy</code> to learn more.

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
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/$
```

---

### 3. strcmp <a name='subparagraph3'></a>

Write a function that compares two strings.

* Prototype: <code>int _strcmp(char *s1, char *s2);</code>
* Your function should work exactly like <code>strcmp</code>

FYI: The standard library provides a similar function: <code>strcmp</code>. Run <code>man strcmp</code> to learn more.

```
julien@ubuntu:~/$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/$
```

---

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy <a name='subparagraph4'></a>

Write a function that reverses the content of an array of integers.

* Prototype: <code>void reverse_array(int *a, int n);</code>
* Where <code>n</code> is the number of elements of the array

```
julien@ubuntu:~/$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/$
```

---

### 5. Always look up <a name='subparagraph5'></a>

Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: <code>char *string_toupper(char *);</code>

```
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/$ ./5-string_toupper 
LOOK UP!
LOOK UP!
julien@ubuntu:~/$
```

---

### 6. Expect the best. Prepare for the worst. Capitalize on what comes <a name='subparagraph6'></a>

Write a function that capitalizes all words of a string.

* Prototype: <code>char *cap_string(char *);</code>
* Separators of words: space, tabulation, new line, <code>,</code>, <code>;</code>, <code>.</code>, <code>!</code>, <code>?</code>, <code>"</code>, <code>(</code>, <code>)</code>, <code>{</code>, and <code>}</code>

```
julien@ubuntu:~/$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/$
```

---

### 7. Mozart composed his music not for the elite, but for everybody <a name='subparagraph7'></a>

Write a function that encodes a string into <a href="/rltoken/UkxNyYU117IdftA9XxsVyQ" target="_blank" title="1337">1337</a>.

* Letters <code>a</code> and <code>A</code> should be replaced by <code>4</code><br/>
* Letters <code>e</code> and <code>E</code> should be replaced by <code>3</code><br/>
* Letters <code>o</code> and <code>O</code> should be replaced by <code>0</code><br/>
* Letters <code>t</code> and <code>T</code> should be replaced by <code>7</code><br/>
* Letters <code>l</code> and <code>L</code> should be replaced by <code>1</code><br/>
* Prototype: <code>char *leet(char *);</code>
* You can only use one <code>if</code> in your code
* You can only use two loops in your code
* You are not allowed to use <code>switch</code>
* You are not allowed to use any ternary operation

```
julien@ubuntu:~/$ cat 7-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/$
```

---

### 8. rot13 <a name='subparagraph8'></a>

Write a function that encodes a string using <a href="/rltoken/A7LWsl_dEMwLByQJx2-W6w" target="_blank" title="rot13">rot13</a>.

* Prototype: <code>char *rot13(char *);</code><br/>
* You can only use <code>if</code> statement once in your code
* You can only use two loops in your code
* You are not allowed to use <code>switch</code>
* You are not allowed to use any ternary operation

```
julien@ubuntu:~/$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
julien@ubuntu:~/$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/$
```

---

### 9. Numbers have life; they're not just symbols on paper <a name='subparagraph9'></a>

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

### 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work <a name='subparagraph10'></a>

<img alt="" loading="lazy" src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2020/9/21b4fc5c1b5df84e6ae4fe8807aa359d929e748a.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20251128%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20251128T102451Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=67eab31ca00574710169039e38ee85eea4a85dc77e668b01acfec154e9d83137" style=""/>

* You are not allowed to use the variable <code>a</code> in your new line of code
* You are not allowed to modify the variable <code>p</code>
* You can only write one statement
* You are not allowed to use <code>,</code>
* You are not allowed to code anything else than the line of expected line of code at the expected line
* Your code should be written at line 19, before the <code>;</code>
* Do not remove anything from the initial code (not even the comments)
* and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
* You are allowed to use the standard library

---

### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art <a name='subparagraph11'></a>

Write a function that adds two numbers.

* Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code><br/>
* Where <code>n1</code> and <code>n2</code> are the two numbers
* <code>r</code> is the buffer that the function will use to store the result
* <code>size_r</code> is the buffer size
* The function returns a pointer to the result
* You can assume that you will always get positive numbers, or <code>0</code>
* You can assume that there will be only digits in the strings <code>n1</code> and <code>n2</code>
* <code>n1</code> and <code>n2</code> will never be empty
* If the result can not be stored in <code>r</code> the function must return <code>0</code>

```
julien@ubuntu:~/$ cat 103-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
julien@ubuntu:~/$ ./103-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
julien@ubuntu:~/$
```

---

### 12. Noise is a buffer, more effective than cubicles or booth walls <a name='subparagraph12'></a>

Write a function that prints a buffer.

* Prototype: <code>void print_buffer(char *b, int size);</code><br/>
* The function must print the content of <code>size</code> bytes of the buffer pointed by <code>b</code><br/>
* The output should print 10 bytes per line
* Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with <code>0</code>
* Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
* Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print <code>.</code>
* Each line ends with a new line <code>\n</code>
* If <code>size</code> is 0 or less, the output should be a new line only <code>\n</code>
* You are allowed to use the standard library
* The output should look like the following example, and formatted exactly the same way:

```
julien@ubuntu:~/$ cat 104-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
julien@ubuntu:~/$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
julien@ubuntu:~/$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)

<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. memset](#subparagraph0)
  - [1. memcpy](#subparagraph1)
  - [2. strchr](#subparagraph2)
  - [3. strspn](#subparagraph3)
  - [4. strpbrk](#subparagraph4)
  - [5. strstr](#subparagraph5)
  - [6. Chess is mental torture](#subparagraph6)
  - [7. The line of life is a ragged diagonal between duty and desire](#subparagraph7)

## Resources
### Read or watch:
* [C - Pointer to Pointer](/rltoken/YoasQWf5LbinwueEzXlghw)
* [C – Pointer to Pointer with example](/rltoken/mLxqSzYyRIO3jGMy_MwxDA)
* [Multi-dimensional Arrays in C](/rltoken/DCKFJFt4UwqEWwktR4T4Ug)
* [Two dimensional (2D) arrays in C programming with example](/rltoken/jjrwl3ad5UxBH6mUV6GI_g)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

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
### 0. memset <a name='subparagraph0'></a>

Write a function that fills memory with a constant byte.

* Prototype: <code>char *_memset(char *s, char b, unsigned int n);</code>
* The <code>_memset()</code> function fills the first <code>n</code> bytes of the memory area pointed to by <code>s</code> with the constant byte <code>b</code>
* Returns a pointer to the memory area <code>s</code>

FYI: The standard library provides a similar function: <code>memset</code>. Run <code>man memset</code> to learn more.

```
julien@ubuntu:~/$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/$
```

---

### 1. memcpy <a name='subparagraph1'></a>

Write a function that copies memory area.

* Prototype: <code>char *_memcpy(char *dest, char *src, unsigned int n);</code>
* The <code>_memcpy()</code>  function  copies <code>n</code> bytes from memory area <code>src</code> to memory area <code>dest</code>
* Returns a pointer to <code>dest</code>

FYI: The standard library provides a similar function: <code>memcpy</code>. Run <code>man memcpy</code> to learn more.

```
julien@ubuntu:~/$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/$
```

---

### 2. strchr <a name='subparagraph2'></a>

Write a function that locates a character in a string.

* Prototype: <code>char *_strchr(char *s, char c);</code>
* Returns a pointer to the first occurrence of the character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not  found

FYI: The standard library provides a similar function: <code>strchr</code>. Run <code>man strchr</code> to learn more.

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
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/$ ./2-strchr 
llo
julien@ubuntu:~/$
```

---

### 3. strspn <a name='subparagraph3'></a>

Write a function that gets the length of a prefix substring.

* Prototype: <code>unsigned int _strspn(char *s, char *accept);</code>
* Returns the number of bytes in the initial segment of <code>s</code> which consist only of bytes from <code>accept</code>

FYI: The standard library provides a similar function: <code>strspn</code>. Run <code>man strspn</code> to learn more.

```
julien@ubuntu:~/$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/$ ./3-strspn 
5
julien@ubuntu:~/$
```

---

### 4. strpbrk <a name='subparagraph4'></a>

Write a function that searches a string for any of a set of bytes.

* Prototype: <code>char *_strpbrk(char *s, char *accept);</code>
* The <code>_strpbrk()</code>  function locates the first occurrence in the string <code>s</code> of any of the bytes in the string <code>accept</code>
* Returns a pointer to the byte in <code>s</code> that matches one of the bytes in <code>accept</code>,  or <code>NULL</code> if no such byte is found

FYI: The standard library provides a similar function: <code>strpbrk</code>. Run <code>man strpbrk</code> to learn more.

```
julien@ubuntu:~/$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/$ ./4-strpbrk 
llo, world
julien@ubuntu:~/$
```

---

### 5. strstr <a name='subparagraph5'></a>

Write a function that locates a substring.

* Prototype: <code>char *_strstr(char *haystack, char *needle);</code>
* The <code>_strstr()</code> function finds the first occurrence of the substring <code>needle</code> in the string <code>haystack</code>.  The terminating null bytes (<code>\0</code>) are not compared
* Returns a pointer to the beginning of the located substring, or <code>NULL</code> if the substring is not found.

FYI: The standard library provides a similar function: <code>strstr</code>. Run <code>man strstr</code> to learn more.

```
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/$ ./5-strstr 
world
julien@ubuntu:~/$
```

---

### 6. Chess is mental torture <a name='subparagraph6'></a>

Write a function that prints the chessboard.

* Prototype: <code>void print_chessboard(char (*a)[8]);</code>

```
julien@ubuntu:~/$ cat 7-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
julien@ubuntu:~/$
```

---

### 7. The line of life is a ragged diagonal between duty and desire <a name='subparagraph7'></a>

Write a function that prints the sum of the two diagonals of a square matrix of integers.

* Prototype: <code>void print_diagsums(int *a, int size);</code>
* Format: see example
* You are allowed to use the standard library

Note that in the following example we are casting an <code>int[][]</code> into an <code>int*</code>. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

```
julien@ubuntu:~/$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
