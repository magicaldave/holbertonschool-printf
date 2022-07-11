#include "../main.h"
int main(void)
{
	short len, len2, c;
	int l = INT_MAX;
	unsigned int ui;
	void *addr;

	_printf("Negative:[%d]\n", -762534);
	_printf("%c", 'S');
	_printf(NULL);
	_printf("css%ccs%scscscs", 'T', "Test");
	_printf("I LIKE WAFFLES");
	_printf("\n%d%i\n", 0, 0);
	_printf("%d\n%d\n", 35, -35);
	_printf("%d", l);
	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	_printf("\nlen1: %d, len2: %d", len, len2);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%d%%", 1000);
	printf("%d%%", 1000);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	c = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("\n%i\n%i", 0, INT_MAX);
	printf("\n%i", INT_MAX);
	_printf("success!");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	/* Project 3 */
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
	printf("%o", -1024);
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
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");

	return (c);
}
