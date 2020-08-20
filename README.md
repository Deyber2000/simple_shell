![HolbertonSchool](https://www.holbertonschool.com/holberton-logo.png)
![Bash - shell](https://bashlogo.com/img/logo/jpg/full_colored_dark.jpg)

# Simple_Shell
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971.
simple_shell is a program that, through commands entered by keyboard, are read by the standard input and delivered to the Operating System for execution.
The standard functions and system calls used in simple_shell are:
access, execve, exit, fork, free, getline, malloc, perror, signal, stat, wait, write.

## FILES

|function   |  Description |
| ---    | --- |
|atoi.c |convert a string to number|
|AUTHORS | contributors to the repository |
|call_func.c |this function will redirect to the right function|
|check_path.c | compare two strings|
|comand_prompt.c |Funtion to change the CTRL+C behavior   |
|env.c |print the environment variables|
|exec_args.c   |funtion that executes a command in a child process    |
|exit.c |Function to exit the program  |
|free.c|Function that frees lists   |
|help.c|info of the built in |
|main.c |main entry of the project  |
|man_1simple_shell| manual for the project |
|parse.c| function that parses text of a string into tokens|
|path.c | parse the input path|
|print_help.c | contains help functions |
|print_help2.c |contains help functions |
| puts.c|  writes the character c to stdout     |
|README.md| description the project|
|shell.h | files headers and prototypes      |
|str_concat.c|copy a string       |
|strcat.c|show a table whit 9 multiplication  |
|strcmp.c |       |
|strcpy.c|       |
|strdup.c|  copy a string     |
|strlen.c|show the length of string  |
|strtok.c|breaks the string    |


# Compiler

Your shell will be compiled this way
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
# Usage

 interactive mode
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
 non-interactive mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## example output
```bash
vagrant@4.3$ ./hsh   /*./hsh executable project shell*/
$ /bin/ls   /*command test*/
atoi.c  comand_prompt.c  free.c  man_1_simple_shell  print_help.c  strcat.c      strdup.c AUTHORS       env.c      help.c  parse.c     puts.c   strcmp.c      strlen.c   call_func.c   exec_args.c      hsh     path.c      README.md     str_concat.c  strtok.c   check_path.c  exit.c     main.c  print_help2.c       shell.h       strcpy.c
$  /*name prompt*/
$ exit  /*commando exit ... project process ends*/
vagrant@4.3$ 
```
## Authors

[Milena Molina Montoya](https://github.com/MIlenaMontoya/simple_shell)
        (https://twitter.com/mimolmon)

[Deyber](https://github.com/Deyber2000/simple_shell)
        (https://twitter.com/Deibercastaeda2)
