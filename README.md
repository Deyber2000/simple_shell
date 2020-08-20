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
|atoi.c |       |
|call_func.c |        |
|check_path.c |       |
|comand_prompt.c    |     |
|exec_args.c   |      |
|exit.c  |       |

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
vagrant@4.3$ ./hsh
#cisfun$ /bin/ls
AUTHORS          hsh              man_1_simple_shell  shell.h            strtok.c
buildin_exec.c   line_executor.c  README.md           string_handler2.c
check_buil-in.c  linker_path.c    shell.c             string_handler.c
#cisfun$ 
```
## Authors

[Milena Molina Montoya](https://github.com/MIlenaMontoya/simple_shell)
        (https://twitter.com/mimolmon)

[Deyber](https://github.com/Deyber2000/simple_shell)
        (https://twitter.com/Deibercastaeda2)
