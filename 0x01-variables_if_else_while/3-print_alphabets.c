#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (succss)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
	ptchar(ch);
	ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
