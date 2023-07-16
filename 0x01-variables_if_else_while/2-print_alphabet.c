#include <stdio.h>

/**
 * main - entry point
 *
 * Descriptiion: point all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
