#include "main.h"

int main(void)
{
	int i = 0;
	i = _printf("Format a Sentence: %s", "Hello, World!\n");
	_printf("Legnth: %d\n", i);



	/* testing %c */
	_printf("Testing %%%c\n", 'c');
	_printf("lowercase and uppercase: %c%c\n", 'a', 'A');
	_printf("Special Characters (5): %c%c%c%c%c\n", '!', '@', '#', '{', '~');

	/* COMPILATION ERRORS:
	 * Regular printf throws error at compile time for the following printf statements
	 *
	 * Error Hunt Update: files will be compiled with -Wno-format
	 * This will let it compile (even reg printf) even if # of args is wrong
	 *
	 * printf: when # of args or type is wrong, still prints with a consistant output ('?')
	 * OUR _printf: prints diffrent output each time (accessing unknown memory)
	 * */
	_printf("Passing in 2 chars to 1 placeholder: %c\n", "aZdefg");
	_printf("passing 2 arguments to 1 placeholder: %c\n", 'a', 'Q');
	_printf("passing 0 arguments to 1 placeholder: %c\n");
	return (0);
}
