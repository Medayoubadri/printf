#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Positive with plus: %+d\n", 42);
	_printf("Positive with space: % d\n", 42);
	_printf("Negative with plus: %+d\n", -42);
	_printf("Octal with hash: %#o\n", 42);
	_printf("Hex with hash: %#x\n", 255);
	return (0);
}

