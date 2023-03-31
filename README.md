
# Holberton School printf project

## *Description*

This is a customized implementation of the printf function in C language, developed as part of the curriculum at Holberton School.

The printf function is a built-in function in the C standard library that allows you to print output to the console. It is widely used in C programming and is considered a fundamental function to learn when studying the language.

This implementation of printf includes several custom format specifiers that allow for more advanced output formatting, including binary, octal, and hexadecimal numbers, as well as support for printing strings and characters.

- `p_char`: This function prints a single character to the console or file.
- `p_str`: This function prints a string of characters to the console or file.
- `p_int`: This function prints an integer value to the console or file.
- `p_int_rec`: This function is a helper function that recursively converts an integer value to a string for printing.
- `p_float`: This function prints a floating-point value to the console or file.
- `_putchar`: This function is a helper function that prints a single character to the console or file.


## *Compilation*


To compile the code on your own machine, kindly

* Clone the project repository to your local machine:
 
 ```bash
 git clone FrensiM/holbertonschool-printf`
 ```

* Compile the printf function by running the following command:

 ```bash
 gcc -Wall -Werror -Wextra -pedantic *.c -o printf
 ```
 This will compile the printf function and create an executable file called printf.

* Run the printf function by executing the following command:
 
 ```bash
 ./printf
 ```
This will execute the printf function and output the results to the console.

## *Formats*

| Specifiers | Description   |
| :---:   | :---:  |
| %c | Print single character   |
| %d | Print a decimal number |
| %s | Prints a string |
| %i | Prints integers |


## *Requirements*

This `printf` implementation was developed in compliance with the following requirements:

- The printf function must be able to handle the following format specifiers: `'%c'`, `'%s'`, `'%d'`, `'%i'`
- The printf function must be able to handle the following flags: `'-'`, `'+'`, `'space'`, `'0'`, and `'#'`.
- The `printf` function must be able to handle width and precision specifiers.
- The `printf` function must return the number of characters printed (excluding the null byte used to end output to strings).
- The `printf` function must be able to handle undefined behavior cases, such as passing invalid format specifiers or incompatible arguments.
- The `printf` function must be able to handle all edge cases, such as minimum and maximum values for integer types.

These requirements ensure that your printf implementation is robust, efficient, and compliant with the standard printf function in the C standard library.

## *Examples*

To run this code you can use the `main.c` file included in this project. Here's a short example 

```C
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len, len2;
 
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
    return (0);
}
```

## *Testing*

To test your printf implementation, you can create a test program that calls the printf function with various input arguments and format specifiers. Here's an example of a test program you could use:

```C
#include "main.h"
#include <stdio.h>

int main(void)
{
    int n = 42;
    char *s = "Hello, world!";
    char c = 'A';

    printf("Integer: %d\n", n);
    printf("String: %s\n", s);
    printf("Character: %c\n", c);
    printf("Hexadecimal: %x\n", n);
    printf("Octal: %o\n", n);
    printf("Binary: %b\n", n);
    printf("Unsigned integer: %u\n", n);
    printf("Percent sign: %%\n");
    printf("Padding: %5d\n", n);
    printf("Left justification: %-5d\n", n);
    printf("Precision: %.2d\n", n);
    printf("Sharp flag: %#x\n", n);
    printf("Plus flag: %+d\n", n);
    printf("Space flag: % d\n", n);

    return (0);
}
```
This test program calls the printf function with various format specifiers and input arguments, including integers, strings, characters, and various flags and modifiers. The expected output for this test program should be:

```bash
Integer: 42
String: Hello, world!
Character: A
Hexadecimal: 2a
Octal: 52
Binary: 101010
Unsigned integer: 42
Percent sign: %
Padding:    42
Left justification: 42   
Precision: 42
Sharp flag: 0x2a
Plus flag: +42
Space flag: 42
```

If your printf implementation outputs this expected result, then it passes this basic test case. However, it is recommended that you create additional test cases to ensure that your implementation handles edge cases, undefined behavior cases, and other special cases correctly.


### _Contributers_

-  [Patrik Shalsi](https://github.com/FrensiM/holbertonschool-printf.git)
-  [Frensi Meta](https://github.com/FrensiM/holbertonschool-printf.git)
-  [Klajdi Dhana](https://github.com/FrensiM/holbertonschool-printf.git)


###



*Thank you for taking the time to explore this printf implementation. We hope that you found this project informative and useful, and that it can help you in your journey to becoming a better programmer. Good luck with your future projects and endeavors!*
