#include "../main.h"
int main(void)
{
	short len, len2, c;
	int l = INT_MAX;
	unsigned int ui;
	void *addr;


	_printf("%r\n%s", "SELFFAW", "WAFFLES");
	_printf("Negative:[%d]\n", -762534);
	_printf("%c", 'S');
	_printf(NULL);
	_printf("css%ccs%scscscs", 'T', "Test");
	_printf("I LIKE WAFFLES");
	_printf("\n%d%i\n", 0, 0);
	_printf("%d\n%d\n", 35, -35);
	_printf("%d", l);
	_printf("%c", '\0');
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Percent:[%%]\n");
	_printf("\nlen1: %d, len2: %d", len, len2);
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%Z]\n");
	_printf("%d%%", 1000);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("\n%i\n%i", 0, INT_MAX);
	_printf("success!");
	_printf("Let's try to printf a simple sentence.\n");

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	_printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%Z]\n");
	_printf("Base 2: %s\n", convert(1024, 2));
	_printf("Base 8 (octal): %s\n", convert(1024, 8));
	_printf("Base 10 (input): %s\n", convert(1024, 10));
	_printf("Base 16(Hex): %s\n", convert(1024, 16));
	_printf("INT_MAX (2) %s\n", convert(INT_MAX, 2));
	_printf("INT_MAX (8) %s\n", convert(INT_MAX, 8));
	_printf("INT_MAX (10) %s\n", convert(INT_MAX, 10));
	_printf("INT_MAX (2) %b\n", NULL);
	_printf("INT_MAX (2) %b\n", INT_MAX);
	_printf("INT_MAX (2) %b\n", INT_MAX);
	_printf("INT_MAX (10) %u\n%u\n%u\n%u\n", NULL, INT_MAX, INT_MIN, 0);
	_printf("%x\n", 15);
	_printf("%X\n%s\n", 15, "MY PANTS ARE STILL ON FIRE");
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	_printf("%S", "No special character.");
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	_printf("INT_MIN %s", convert(0, 10));
	_printf("%s", "\nGIVE ME THE PANTS\n");
	_printf("INT_MAX (2) %b\n", 64);

	/* Project 3 */
	_printf("%b\n", 98);
	_printf("%b", 1024);
	_printf("%b", -1024);
	_printf("%b", 0);
	_printf("%b", UINT_MAX);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);


	/* Project 4 */
	_printf("%u", 1024);
	_printf("%u", -1024);
	_printf("%u", 0);
	_printf("%u", UINT_MAX);
	_printf("There is %u bytes in %u KB\n", 1024, 1);
	_printf("%u - %u = %u\n", 2048, 1024, 1024);
	_printf("%o", 1024);
	_printf("%o", -1024);
	_printf("%o", 0);
	_printf("%o", UINT_MAX);
	_printf("There is %o bytes in %o KB\n", 1024, 1);
	_printf("%o - %o = %o\n", 2048, 1024, 1024);
	_printf("%x", 1024);
	_printf("%x", -1024);
	_printf("%x", 0);
	_printf("%x", UINT_MAX);
	_printf("There is %x bytes in %x KB\n", 1024, 1);
	_printf("%X", 1024);
	_printf("%X", -1024);
	_printf("%X", 0);
	_printf("%X", UINT_MAX);
	_printf("There is %X bytes in %X KB\n", 1024, 1);

	/*Project 7*/
	_printf("%S", "No special character.");
	_printf("%S", "\n");
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	_printf("");
	c = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");

	/* Project 14 */
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	
	/* Project 15 */
	_printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");


	return (c);
}
