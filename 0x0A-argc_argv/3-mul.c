#include <stdio.h>
/**
 * main - prints the sum of 2 numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0-success, 1-faild
*/
int main(int argc, char *argv[])
{
int sum;
if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
