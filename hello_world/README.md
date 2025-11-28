<div align="center"><img src="https://github.com/vtiquet/holbertonschool-resources/blob/main/image/Holberton-Logo.svg" width=40% height=40%/></div>

# Resources

## Table of Contents :

  - [0. <o>](#subparagraph0)
  - [1. Hello you](#subparagraph1)
  - [2. The path to success is to take massive, determined action](#subparagraph2)
  - [3. If the path be beautiful, let us not ask where it leads](#subparagraph3)
  - [4. Global variables](#subparagraph4)
  - [5. Local variables](#subparagraph5)
  - [6. Local variable](#subparagraph6)
  - [7. Global variable](#subparagraph7)
  - [8. Every addition to true knowledge is an addition to human power](#subparagraph8)
  - [9. Divide and rule](#subparagraph9)
  - [10. Love is anterior to life, posterior to death, initial of creation, and the exponent of breath](#subparagraph10)
  - [11. There are 10 types of people in the world -- Those who understand binary, and those who don't](#subparagraph11)
  - [12. Combination](#subparagraph12)
  - [13. Floats](#subparagraph13)
  - [14. Decimal to Hexadecimal](#subparagraph14)
  - [15. What happens when you type ls *.c](#subparagraph15)
  - [16. Everyone is a proponent of strong encryption](#subparagraph16)
  - [17. The eggs of the brood need to be an odd number](#subparagraph17)
  - [18. I'm an instant star. Just add water and stir.](#subparagraph18)

## Resources
### Read or watch:
* [Expansions](/rltoken/qvjamZX_aoZmdZOiEapxzw)
* [Shell Arithmetic](/rltoken/CuAnsjJ9mg_y-zBVwmn7mg)
* [Variables](/rltoken/vjgJv9-2mvkhoMT05Mk-VA)
* [Shell initialization files](/rltoken/0DxDIIG_UpoM7cKGhsuVWw)
* [The alias Command](/rltoken/xiCCKpPNQRbFa1O4kvWgQA)
* [Technical Writing](/rltoken/Q8zTND7LWon8lD__raFNUw)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What happens when you type$ ls -l *.txt

## Requirements
### General
* Allowed editors:vi,vim,emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long ($ wc -l fileshould print 2)
* All your files should end with a new line (why?)
* The first line of all your files should be exactly#!/bin/bash
* AREADME.mdfile, at the root of the folder of the project, describing what each script is doing
* You are not allowed to use&&,||or;
* You are not allowed to usebc,sedorawk
* All your files must be executable

## Task
### 0. <o> <a name='subparagraph0'></a>

Create a script that creates an alias.

* Name: <code>ls</code>
* Value: <code>rm -f *</code>

```
julien@ubuntu:/tmp/0x03$ ls
0-alias  file1  file2
julien@ubuntu:/tmp/0x03$ source ./0-alias 
julien@ubuntu:/tmp/0x03$ ls
julien@ubuntu:/tmp/0x03$ \ls
julien@ubuntu:/tmp/0x03$
```

---

### 1. Hello you <a name='subparagraph1'></a>

Create a script that prints <code>hello user</code>, where user is the current Linux user.

```
julien@ubuntu:/tmp/0x03$ id
uid=1000(julien) gid=1000(julien) groups=1000(julien),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),113(lpadmin),128(sambashare)
julien@ubuntu:/tmp/0x03$ ./1-hello_you 
hello julien
julien@ubuntu:/tmp/0x03$
```

---

### 2. The path to success is to take massive, determined action <a name='subparagraph2'></a>

Add <code>/action</code> to the <code>PATH</code>.
<code>/action</code> should be the last directory the shell looks into when looking for a program.

```
julien@ubuntu:/tmp/0x03$ echo $PATH
/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
julien@ubuntu:/tmp/0x03$ source ./2-path 
julien@ubuntu:/tmp/0x03$ echo $PATH
/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/action
julien@ubuntu:/tmp/0x03$
```

---

### 3. If the path be beautiful, let us not ask where it leads <a name='subparagraph3'></a>

Create a script that counts the number of directories in the <code>PATH</code>.

```
julien@ubuntu:/tmp/0x03$ echo $PATH
/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
julien@ubuntu:/tmp/0x03$ . ./3-paths 
11
julien@ubuntu:/tmp/0x03$ PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:::::/hello
julien@ubuntu:/tmp/0x03$ . ./3-paths 
12
julien@ubuntu:/tmp/0x03$
```

---

### 4. Global variables <a name='subparagraph4'></a>

Create a script that lists environment variables.

```
julien@ubuntu:/tmp/0x03$ source ./4-global_variables
CC=gcc
CDPATH=.:~:/usr/local:/usr:/
CFLAGS=-O2 -fomit-frame-pointer
COLORTERM=gnome-terminal
CXXFLAGS=-O2 -fomit-frame-pointer
DISPLAY=:0
DOMAIN=hq.garrels.be
e=
TOR=vi
FCEDIT=vi
FIGNORE=.o:~
G_BROKEN_FILENAMES=1
GDK_USE_XFT=1
GDMSESSION=Default
GNOME_DESKTOP_SESSION_ID=Default
GTK_RC_FILES=/etc/gtk/gtkrc:/nethome/franky/.gtkrc-1.2-gnome2
GWMCOLOR=darkgreen
GWMTERM=xterm
HISTFILESIZE=5000
history_control=ignoredups
HISTSIZE=2000
HOME=/nethome/franky
HOSTNAME=octarine.hq.garrels.be
INPUTRC=/etc/inputrc
IRCNAME=franky
JAVA_HOME=/usr/java/j2sdk1.4.0
LANG=en_US
LDFLAGS=-s
LD_LIBRARY_PATH=/usr/lib/mozilla:/usr/lib/mozilla/plugins
LESSCHARSET=latin1
LESS=-edfMQ
LESSOPEN=|/usr/bin/lesspipe.sh %s
LEX=flex
LOCAL_MACHINE=octarine
LOGNAME=franky
[...]
julien@ubuntu:/tmp/0x03$
```

---

### 5. Local variables <a name='subparagraph5'></a>

Create a script that lists all local variables and environment variables, and functions.

```
julien@ubuntu:/tmp/0x03$ . ./5-local_variables
BASH=/bin/bash
BASHOPTS=checkwinsize:cmdhist:complete_fullquote:expand_aliases:extglob:extquote:force_fignore:histappend:interactive_comments:progcomp:promptvars:sourcepath
BASH_ALIASES=()
BASH_ARGC=()
BASH_ARGV=()
BASH_CMDS=()
BASH_COMPLETION_COMPAT_DIR=/etc/bash_completion.d
BASH_LINENO=()
BASH_REMATCH=()
BASH_SOURCE=()
BASH_VERSINFO=([0]="4" [1]="3" [2]="46" [3]="1" [4]="release" [5]="x86_64-pc-linux-gnu")
BASH_VERSION='4.3.46(1)-release'
CLUTTER_IM_MODULE=xim
COLUMNS=133
COMPIZ_CONFIG_PROFILE=ubuntu
COMP_WORDBREAKS=$' \t\n"\'><=;|&(:'
DBUS_SESSION_BUS_ADDRESS=unix:abstract=/tmp/dbus-Fg27Lr20bq
DEFAULTS_PATH=/usr/share/gconf/ubuntu.default.path
DESKTOP_SESSION=ubuntu
[...]
julien@ubuntu:/tmp/0x03$
```

---

### 6. Local variable <a name='subparagraph6'></a>

Create a script that creates a new local variable.

* Name: <code>BEST</code>
* Value: <code>School</code>

---

### 7. Global variable <a name='subparagraph7'></a>

Create a script that creates a new global variable.

* Name: <code>BEST</code>
* Value: <code>School</code>

---

### 8. Every addition to true knowledge is an addition to human power <a name='subparagraph8'></a>

Write a script that prints the result of the addition of 128 with the value stored in the environment variable <code>TRUEKNOWLEDGE</code>, followed by a new line.

```
julien@production-503e7013:~$ export TRUEKNOWLEDGE=1209
julien@production-503e7013:~$ ./8-true_knowledge | cat -e
1337$
julien@production-503e7013:~$
```

---

### 9. Divide and rule <a name='subparagraph9'></a>

Write a script that prints the result of <code>POWER</code> divided by <code>DIVIDE</code>, followed by a new line.

* <code>POWER</code> and <code>DIVIDE</code> are environment variables

```
julien@production-503e7013:~$ export POWER=42784
julien@production-503e7013:~$ export DIVIDE=32
julien@production-503e7013:~$ ./9-divide_and_rule | cat -e
1337$
julien@production-503e7013:~$
```

---

### 10. Love is anterior to life, posterior to death, initial of creation, and the exponent of breath <a name='subparagraph10'></a>

Write a script that displays the result of <code>BREATH</code> to the power <code>LOVE</code>

* <code>BREATH</code> and <code>LOVE</code> are environment variables
* The script should display the result, followed by a new line

```
julien@production-503e7013:~/$ export BREATH=4
julien@production-503e7013:~/$ export LOVE=3
julien@production-503e7013:~/$ ./10-love_exponent_breath
64
julien@production-503e7013:~/$
```

---

### 11. There are 10 types of people in the world -- Those who understand binary, and those who don't <a name='subparagraph11'></a>

Write a script that converts a number from base 2 to base 10.

* The number in base 2 is stored in the environment variable <code>BINARY</code>
* The script should display the number in base 10, followed by a new line

```
julien@production-503e7013:~/$ export BINARY=10100111001
julien@production-503e7013:~/$ ./11-binary_to_decimal
1337
julien@production-503e7013:~/$
```

---

### 12. Combination <a name='subparagraph12'></a>

Create a script that prints all possible combinations of two letters, except <code>oo</code>.

* Letters are lower cases, from <code>a</code> to <code>z</code>
* One combination per line
* The output should be alpha ordered, starting with <code>aa</code>
* Do not print <code>oo</code>
* Your script file should contain maximum 64 characters

```
julien@ubuntu:/tmp/0x03$ echo $((26 ** 2 -1))
675
julien@ubuntu:/tmp/0x03$ ./12-combinations | wc -l
675
julien@ubuntu:/tmp/0x03$ 
julien@ubuntu:/tmp/0x03$ ./12-combinations | tail -303 | head -10
oi
oj
ok
ol
om
on
op
oq
or
os
julien@ubuntu:/tmp/0x03$
```

---

### 13. Floats <a name='subparagraph13'></a>

Write a script that prints a number with two decimal places, followed by a new line.

The number will be stored in the environment variable <code>NUM</code>.

```
ubuntu@ip-172-31-63-244:~/0x03$ export NUM=0
ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
0.00
ubuntu@ip-172-31-63-244:~/0x03$ export NUM=98
ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
98.00
ubuntu@ip-172-31-63-244:~/0x03$ export NUM=3.14159265359
ubuntu@ip-172-31-63-244:~/0x03$ ./13-print_float
3.14
ubuntu@ip-172-31-63-244:~/0x03$
```

---

### 14. Decimal to Hexadecimal <a name='subparagraph14'></a>

Write a script that converts a number from base 10 to base 16.

* The number in base 10 is stored in the environment variable <code>DECIMAL</code>
* The script should display the number in base 16, followed by a new line

```
julien@production-503e7013:~/$ export DECIMAL=16
julien@production-503e7013:~/$ ./14-decimal_to_hexadecimal
10
julien@production-503e7013:~/$ export DECIMAL=1337
julien@production-503e7013:~/$ ./14-decimal_to_hexadecimal | cat -e
539$
julien@production-503e7013:~/$ export DECIMAL=15
julien@production-503e7013:~/$ ./14-decimal_to_hexadecimal | cat -e
f$
julien@production-503e7013:~/$
```

---

### 15. What happens when you type ls *.c <a name='subparagraph15'></a>

Write a blog post describing step by step what happens when you type <code>ls *.c</code> and hit Enter in your shell.
Try to explain every step you know of, and give examples. A total beginner should understand what you have written.

* Have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Write professionally and intelligibly
* Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

<strong><em>Remember, future employers will see your articles; take this seriously, and produce something that will be an asset to your future</em></strong>

When done, please add all urls below (blog post, LinkedIn post, etc.)

---

### 16. Everyone is a proponent of strong encryption <a name='subparagraph16'></a>

Write a script that encodes and decodes text using the rot13 encryption. Assume ASCII.

```
julien@production-503e7013:~/shell/fun_with_the_shell$ cat quote
"Everyone is a proponent of strong encryption."
- Dorothy E. Denning
julien@production-503e7013:~/shell/fun_with_the_shell$ ./15-rot13 < quote
"Rirelbar vf n cebcbarag bs fgebat rapelcgvba."
- Qbebgul R. Qraavat
julien@production-503e7013:~/shell/fun_with_the_shell$
```

---

### 17. The eggs of the brood need to be an odd number <a name='subparagraph17'></a>

Write a script that prints every other line from the input, starting with the first line.

```
ubuntu@ip-172-31-63-244:/$ \ls -1
bin
boot
dev
etc
home
initrd.img
lib
lib32
lib64
libx32
lost+found
media
mnt
opt
proc
root
run
sbin
srv
sys
t
#t#
t~
tmp
usr
var
vmlinuz
whoareyou
ubuntu@ip-172-31-63-244:/$ \ls -1 | ./c-odd
bin
dev
home
lib
lib64
lost+found
mnt
proc
run
srv
t
t~
usr
vmlinuz
ubuntu@ip-172-31-63-244:/$
```

---

### 18. I'm an instant star. Just add water and stir. <a name='subparagraph18'></a>

Write a shell script that adds the two numbers stored in the environment variables <code>WATER</code>  and <code>STIR</code>  and prints the result.

* <code>WATER</code>  is in base <code>water</code>
* <code>STIR</code>  is in base <code>stir.</code>
* The result should be in base <code>bestchol</code>

```
julien@production-503e7013:~$ export WATER="ewwatratewa"
julien@production-503e7013:~$ export STIR="ti.itirtrtr"
julien@production-503e7013:~$ ./17-water_and_stir
shtbeolhc
julien@production-503e7013:~$
```

---


## Authors
vtiquet - [GitHub Profile](https://github.com/vtiquet)
