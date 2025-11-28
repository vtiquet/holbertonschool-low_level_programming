<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. Positive anything is better than negative nothing](#subparagraph0)
  - [1. The last digit](#subparagraph1)
  - [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](#subparagraph2)
  - [3. alphABET](#subparagraph3)
  - [4. When I was having that alphabet soup, I never thought that it would pay off](#subparagraph4)
  - [5. Numbers](#subparagraph5)
  - [6. Numberz](#subparagraph6)
  - [7. Smile in the mirror](#subparagraph7)
  - [8. Hexadecimal](#subparagraph8)
  - [9. Patience, persistence and perspiration make an unbeatable combination for success](#subparagraph9)
  - [10. Inventing is a combination of brains and materials. The more brains you use, the less material you need](#subparagraph10)
  - [11. The success combination in business is: Do what you do better... and: do more of what you do...](#subparagraph11)
  - [12. Software is eating the World](#subparagraph12)

## Resources
### Read or watch:
* [Everything you need to know to start with C.pdf](/rltoken/ctLjDfYH3-AZJ7a-gzljCw)
* [Keywords and identifiers](/rltoken/CJPUuNKHthtvZgImtEVvXA)
* [integers](/rltoken/L62RbK4buoJpukZpGiYo4w)
* [Arithmetic Operators in C](/rltoken/WYLsq9-VLs8EkYxZepIdcg)
* [If statements in C](/rltoken/yuTsh0MB6AzC2L43xX9mJQ)
* [if…else statement](/rltoken/4V25mIXrXwCPCw5N6l9h8A)
* [Relational operators](/rltoken/MVF9PuY_IAVw5fh79b6lww)
* [Logical operators](/rltoken/Uz1byju6ep3Ur0URB1Pt0A)
* [while loop in C](/rltoken/FxPxfoKS2AVjvrSGQQKY0g)
* [While loop](/rltoken/zqJKmSFQD8nlNSDnGcU7AQ)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use theif,if ... elsestatements
* How to use comments
* How to declare variables of typeschar,int,unsigned int
* How to assign values to variables
* How to print the values of variables of typechar,int,unsigned intwithprintf
* How to use thewhileloop
* How to use variables with thewhileloop
* How to print variables usingprintf
* What is theASCIIcharacter set
* What are the purpose of thegccflags-m32and-m64

## Requirements
### General
* Allowed editors:vi,vim,emacs
* All your files will be compiled on Ubuntu 20.04 LTS usinggcc, using the options-Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* AREADME.mdfile, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* You are not allowed to usesystem
* Your code should use theBettystyle. It will be checked usingbetty-style.plandbetty-doc.pl

## Task
### 0. Positive anything is better than negative nothing <a name='subparagraph0'></a>

This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.

* You can find the source code <a href="/rltoken/ien80EnyS6QncYliqMBsqQ" target="_blank" title="here">here</a>
* The variable <code>n</code> will store a different value every time you will run this program
* You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code
* The output of the program should be:


  * The number, followed by


    * if the number is greater than 0: <code>is positive</code>
    * if the number is 0: <code>is zero</code>
    * if the number is less than 0: <code>is negative</code>
  * followed by a new line

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/$
```

---

### 1. The last digit <a name='subparagraph1'></a>

This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.

* You can find the source code <a href="/rltoken/kycB6GKdmgEgH-rX0mwD9g" target="_blank" title="here">here</a>
* The variable <code>n</code> will store a different value every time you run this program
* You don’t have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code
* The output of the program should be:


  * The string <code>Last digit of</code>, followed by
  * <code>n</code>, followed by
  * the string <code>is</code>, followed by


    * if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code>
    * if the last digit of <code>n</code> is 0: the string <code>and is 0</code>
    * if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code>
  * followed by a new line

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/$
```

---

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game <a name='subparagraph2'></a>

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/$
```

---

### 3. alphABET <a name='subparagraph3'></a>

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> three times in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/$
```

---

### 4. When I was having that alphabet soup, I never thought that it would pay off <a name='subparagraph4'></a>

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except <code>q</code> and <code>e</code>
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/$
```

---

### 5. Numbers <a name='subparagraph5'></a>

Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.

* All your code should be in the <code>main</code> function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/$ ./5-print_numbers 
0123456789
julien@ubuntu:~/$
```

---

### 6. Numberz <a name='subparagraph6'></a>

Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.

* You are not allowed to use any variable of type <code>char</code>
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* You can only use <code>putchar</code> twice in your code
* All your code should be in the <code>main</code> function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/$ ./6-print_numberz 
0123456789
julien@ubuntu:~/$
```

---

### 7. Smile in the mirror <a name='subparagraph7'></a>

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> twice in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/$
```

---

### 8. Hexadecimal <a name='subparagraph8'></a>

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> three times in your code

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/$
```

---

### 9. Patience, persistence and perspiration make an unbeatable combination for success <a name='subparagraph9'></a>

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by <code>,</code>, followed by a space
* Numbers should be printed in ascending order
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* All your code should be in the <code>main</code> function
* You can only use <code>putchar</code> four times maximum in your code
* You are not allowed to use any variable of type <code>char</code>

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/$
```

---

### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need <a name='subparagraph10'></a>

Write a program that prints all possible different combinations of two digits.

* Numbers must be separated by <code>,</code>, followed by a space
* The two digits must be different
* <code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code>
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* You can only use <code>putchar</code> five times maximum in your code
* You are not allowed to use any variable of type <code>char</code>
* All your code should be in the <code>main</code> function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/$
```

---

### 11. The success combination in business is: Do what you do better... and: do more of what you do... <a name='subparagraph11'></a>

Write a program that prints all possible different combinations of three digits.

* Numbers must be separated by <code>,</code>, followed by a space
* The three digits must be different
* <code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code>
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* You can only use <code>putchar</code> six times maximum in your code
* You are not allowed to use any variable of type <code>char</code>
* All your code should be in the <code>main</code> function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/$
```

---

### 12. Software is eating the World <a name='subparagraph12'></a>

Write a program that prints all possible combinations of two two-digit numbers.

* The numbers should range from <code>0</code> to <code>99</code>
* The two numbers should be separated by a space
* All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code>
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* <code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code>
* You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)
* You can only use <code>putchar</code> eight times maximum in your code
* You are not allowed to use any variable of type <code>char</code>
* All your code should be in the <code>main</code> function

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
