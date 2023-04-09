#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of the c program
 * @argc: the function states the commands used in the command line
 * @argv: array of arguments contained in arg c
 * Return: The integer to be returned after succesful runtime
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
