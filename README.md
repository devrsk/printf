0x11.C printf team project

Description
This team project is part of the first year curriculum of Holberton School and ALX_Africa.

_printf replicates the C standard library printf() function.

What you should learn from this project:

How to use git in a team setting
The complexities of printf
Managing a lot of files and finding a good workflow
Prototype
int _printf(const char format, ...);
Usage
Prints a string to the standard output, according to a given format
All files were created and compiled on Ubuntu 20.04 LTS using GCC with the command gcc -Wall -Werror -Wextra -pedantic *.c
Returns the number of characters in the output string on success, -1 otherwise
Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters
Examples
_printf("Hello, Holberton\n") prints "Hello, Holberton", followed by a new line
_printf("%s", "Hello") prints "Hello"
_printf("This is a number: %d", 98) prints "This is a number: 98"
<<<<<<< HEAD
Authors:	
	'Zadré wells Zadré
	Raheem Salifu Kasim'
=======

Authors:
	
	Zadré wells Zadré
	
	Raheem Salifu Kasim
>>>>>>> 3370428ca70610347a3f9b06575c15818d0bf918
