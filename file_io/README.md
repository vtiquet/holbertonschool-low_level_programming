<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. Tread lightly, she is near](#subparagraph0)
  - [1. Under the snow](#subparagraph1)
  - [2. Speak gently, she can hear](#subparagraph2)
  - [3. cp](#subparagraph3)

## Resources
### Read or watch:
* [File descriptors](/rltoken/JDJ9geRUnMoTyMJSHYUHiA)
* [How to Use the I/O System Calls Open, Close, Read and Write.](/rltoken/e6VbIL-CjzPsWNtNKPe_QQ)
* [C Programming in Linux Tutorial - open() read() write() Functions](/rltoken/2wyxBQICb3qsEh_UOxYgyw)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are theirPOSIXnames
* How to use the I/O system callsopen,close,readandwrite
* What are and how to use the flagsO_RDONLY,O_WRONLY,O_RDWR
* What are file permissions, and how to set them when creating a file with theopensystem call
* What is a system call
* What is the difference between a function and a system call

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
* Allowed syscalls:read,write,open,close
* You are allowed to use_putchar
* You don’t have to push_putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, themain.cfiles are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our ownmain.cfiles at compilation. Ourmain.cfiles might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function_putcharshould be included in your header file calledmain.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instanceread(STDIN_FILENO, ...vsread(0, ...

## Task
### 0. Tread lightly, she is near <a name='subparagraph0'></a>

Write a function that reads a text file and prints it to the <code>POSIX</code> standard output.

* Prototype: <code>ssize_t read_textfile(const char *filename, size_t letters);</code>
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return <code>0</code>
* if <code>filename</code> is <code>NULL</code> return <code>0</code>
* if <code>write</code> fails or does not write the expected amount of bytes, return <code>0</code>

```
julien@ubuntu:~/File descriptors and permissions$ cat Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/File descriptors and permissions$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
julien@ubuntu:~/File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/File descriptors and permissions$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/File descriptors and permissions$
```

---

### 1. Under the snow <a name='subparagraph1'></a>

Create a function that creates a file.

* Prototype: <code>int create_file(const char *filename, char *text_content);</code>
* where <code>filename</code> is the name of the file to create and <code>text_content</code> is a <code>NULL</code> terminated string to write to the file
* Returns: <code>1</code> on success, <code>-1</code> on failure (file can not be created, file can not be written, <code>write</code> “fails”, etc…)
* The created file must have those permissions: <code>rw-------</code>. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if <code>filename</code> is <code>NULL</code> return <code>-1</code>
* if <code>text_content</code> is <code>NULL</code> create an empty file

```
julien@ubuntu:~/File descriptors and permissions$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
julien@ubuntu:~/File descriptors and permissions$ ./b hello world
-> 1)
julien@ubuntu:~/File descriptors and permissions$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
julien@ubuntu:~/File descriptors and permissions$ cat hello 
worldjulien@ubuntu:~/File descriptors and permis$
```

---

### 2. Speak gently, she can hear <a name='subparagraph2'></a>

Write a function that appends text at the end of a file.

* Prototype: <code>int append_text_to_file(const char *filename, char *text_content);</code>
* where <code>filename</code> is the name of the file and <code>text_content</code> is the <code>NULL</code> terminated string to add at the end of the file
* Return: <code>1</code> on success and <code>-1</code> on failure
* Do not create the file if it does not exist
* If <code>filename</code> is <code>NULL</code> return <code>-1</code>
* If <code>text_content</code> is <code>NULL</code>, do not add anything to the file. Return <code>1</code> if the file exists and <code>-1</code> if the file does not exist or if you do not have the required permissions to write the file

```
julien@ubuntu:~/File descriptors and permissions$ cat 2-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/File descriptors and permissions$ echo -n Hello > hello
julien@ubuntu:~/File descriptors and permissions$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
julien@ubuntu:~/File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
julien@ubuntu:~/File descriptors and permissions$ ./c hello " World!
> "
-> 1)
julien@ubuntu:~/File descriptors and permissions$ cat hello 
Hello World!
julien@ubuntu:~/File descriptors and permissions$
```

---

### 3. cp <a name='subparagraph3'></a>

Write a program that copies the content of a file to another file.

* Usage: <code>cp file_from file_to</code>
* if the number of argument is not the correct one, exit with code <code>97</code> and print <code>Usage: cp file_from file_to</code>, followed by a new line, on the <code>POSIX</code> standard error
* if <code>file_to</code> already exists, truncate it
* if <code>file_from</code> does not exist, or if you can not read it, exit with code <code>98</code> and print <code>Error: Can't read from file NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error


  * where <code>NAME_OF_THE_FILE</code> is the first argument passed to your program
* if you can not create or if <code>write</code> to <code>file_to</code> fails, exit with code <code>99</code> and print <code>Error: Can't write to NAME_OF_THE_FILE</code>, followed by a new line, on the <code>POSIX</code> standard error


  * where <code>NAME_OF_THE_FILE</code> is the second argument passed to your program
* if you can not close a file descriptor , exit with code <code>100</code> and print <code>Error: Can't close fd FD_VALUE</code>, followed by a new line, on the <code>POSIX</code> standard error


  * where <code>FD_VALUE</code> is the value of the file descriptor
* Permissions of the created file: <code>rw-rw-r--</code>. If the file already exists, do not change the permissions
* You must read <code>1,024</code> bytes at a time from the <code>file_from</code> to make less system calls. Use a buffer
* You are allowed to use <code>dprintf</code>

```
julien@ubuntu:~/File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
julien@ubuntu:~/File descriptors and permissions$ cat incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/File descriptors and permissions$ ./cp incitatous Incitatous
julien@ubuntu:~/File descriptors and permissions$ ls -l Incitatous 
-rw-rw-r-- 1 julien julien 158 Dec  3 15:39 Incitatous
julien@ubuntu:~/File descriptors and permissions$ cat Incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/File descriptors and permissions$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
