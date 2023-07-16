#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
char CH = 'A';

/*print a - z*/
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}

/*point A - Z*/
while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
putchar('\n');

return (0);
}
