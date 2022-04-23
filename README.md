![](https://www.equestionanswers.com/c/images/printf-block-diagram.png)

# _printf()
A simple printf function developed by Binael Nchekwube and Triumph Edet which imitates the basic functions of the "printf" function in C Programming.

*_printf() format:*

	int _printf(const char *format, ...)

## Tabular breakdown of functions, its meaning and the associated specifier

| SPECIFIER | FUNCTION FILE | OUTPUT |
| --------------- | --------------- | --------------- |
| c | print_c.c | prints characters to standard output |
| s | print_s.c | prints string |
| p | print_p.c | prints pointer address |
| b | print_b.c | converts decimal to binary |
| R | print_R.c | converts string to Rot13
| d | print_d.c | converts to decimal
| x | print_hex.c | convert to lowercase unsigned hexadecimal |
| i | print_i.c | convert to integer |
| o | print_o.c | convert to octadecimal
| X | prnt_X.c | convert to uppercase hexadecimal |
| u | print_u.c | unsigned integer |

## Other files

### main.h
Project Head File

### man_print
The man manual of the _printf() project

### _putchar.c
Mimicks stdio library putchar function

### get_func.c
Selects the right function for the given specifier

### main.c
Test main function

### .gitignore
Ignores the main.c function


_*Project Authors*_

- Binael Nchekwube
- Triumph Edet
