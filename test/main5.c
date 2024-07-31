#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Plus flag: %+d\n", 42);   /* Test + flag */
	_printf("Space flag: % d\n", 42);  /* Test space flag */
	_printf("Hash flag (octal): %#o\n", 42);  /* Test # flag with octal */
	_printf("Hash flag (hex): %#x\n", 42);    /* Test # flag with hex */
	_printf("Hash flag (HEX): %#X\n", 42);    /* Test # flag with HEX */
	return (0);
}

