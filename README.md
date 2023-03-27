\033[1mCustom printf implementation\033[0m

\033[1mDescription:\033[0m
This is a custom implementation of the printf function in C. It is designed to handle various types of arguments and print them to the standard output stream. The implementation includes multiple files and functions, each with a specific purpose. 

\033[1mFiles:\033[0m
- _printf.c: The main function that takes in a string and prints different types of arguments based on the format specifier provided in the string.
- _putchar.c: Function responsible for writing to stdout.
- get_flags.c: Function that acts responsively when a flag is invoked.
- get_modifier.c: Function that finds the modifier in the format specifier and invokes the corresponding function.
- get_width.c: Function that gets the width from a width specifier.
- main.h: Header file that contains function prototypes and other definitions.
- print_Hex.c: Function that prints an unsigned int in Hex upper format.
- print_S.c: Function that handles custom conversion S which for instance prints '\n' as \x and hex equivalent of n.
- print_p.c: Function that prints an address.
- print_binary.c: Function that prints an unsigned int in binary format.
- rev_string.c: Function that reverses a string.
- print_hex.c: Function that prints an unsigned int in hex lower format.
- print_num.c: Function that prints an integer of format 'd'.
- print_octal.c: Function that prints a number in octal.
- print_r.c: Function that prints a string in reverse.
- print_char.c: Function that prints a character to stdout.
- get_func.c: Function that selects the right function corresponding to the format specified.
- print_rot13.c: Function that prints a string in rot13.

\033[1mUsage:\033[0m
To use this custom printf implementation, simply include the "main.h" header file in your C code and call the _printf function with the appropriate format specifier and arguments.

\033[1mExample:\033[0m
#include "main.h"
int main()
{
   _printf("Hello, %s!\n", "world");
   return 0;
}


\033[1mContributors:\033[0m
- Cecilia Mulandi
- Benson Kivuva

\033[1mFeedback:\033[0m
If you have any feedback or suggestions, please contact us at benkivuvak5@gmail.com or mulandicecilia4@gmail.com

