# Project 1137: 0x12. C - printf
## Team: [Blake Willis](https://www.linkedin.com/in/blake-willis-395232177/) and [Dave Corley](https://www.linkedin.com/in/dave-corley-859304242/)
### Project Link: [click me!](https://intranet.hbtn.io/projects/1137)

Welcome to our _printf repository! This project's goal is to recreate GNU printf using a limited set of functionality within the C language. Specifically, the requirements are as follows:

 - Allowed Editors: `Vi`, `Vim`, `Emacs`
 - All files compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 *.c`
 - All files must end with a newline character
 - A README.md file must be at the root directory of the repository (Hi!)
 - All code built using [Betty](https://github.com/holbertonschool/Betty) style
 - No global variables
 - No more than five functions per file
 - Do not include a `main.c` file.
 - All header files must be include guarded
 - No `_putchar` function will be provided.

### Authorized functions and macros

-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `__va_copy`  (`man 3 va_copy`) (C89 version)
-   `va_arg`  (`man 3 va_arg`)

The functionality of printf is to use the `write()` function while reading an input string, replacing certain sets of characters in the format string with variadic arguments.

So, using the `%c` specifier to print a single character,
`printf("%c", 'A')`
Results in the character:
`A`

# Testing
For convenience, we have provided a folder called "tests" with a main.c file in it for ease of compilation. This file contains a battery of tests actually ran by Holberton's automated checker to ensure the desired functionality is in place. 

To build the program, clone this repository.
`git clone https://github.com/magicaldave/holbertonschool-printf.git`
`cd holbertonschool-printf/`
And run the script:
`build.sh`

This builds and runs the program one time. The provided `main.c` file also returns the total count of characters, allowing you to accurately check the return of specific statements by simply running the following in a terminal:
`./a.out & echo $?`

# Sub-Projects
## Mandatory tasks
### 0 - I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
- Handle %c, %s, and % specifiers.
- The code should be able to print characters, strings, and single percent signs.

### 1 - Education is when you read the fine print. Experience is what you get if you don't
- Handle `%i` and `%d` specifiers
- Flags, field width, precision, and length are NOT required

### 2 - Just because it's in print doesn't mean it's the gospel
- Make a man page!
- In order to read this one, clone this repo. In a terminal, enter the folder you just cloned and use the command `man ./man_3_printf`

## Advanced Tasks

### 3. With a face like mine, I do better in print
- Handle `%b` specifier to print binary numbers

### 4. What one has not experienced, one will never understand in print
- Handle `%u` specifier for unsigned integers
- Handle `%o` specifier for octal numbers
- Handle `%x` and `%X` specifier for hexadecimal numbers in lower and upper cases respectively
- Flags, field width, precision, and length are NOT required

### 5. Nothing in fine print is ever good news
- Write the entire output string using a large buffer (1K) and a single call to `write()`

### 7. My weakness is wearing too much leopard print
- Handle the `%S` custom specifier.
- Print strings, except print all non-printable characters using the format `\x`, then their hex value, with a minimum of two characters following `\x`


