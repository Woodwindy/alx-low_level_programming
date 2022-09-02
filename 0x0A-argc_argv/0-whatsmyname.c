#include <stdio.h>

/** 
 * This program prints its own name even when its name is changed.
 * main - prints its name, followed by a  new line.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: zero.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
