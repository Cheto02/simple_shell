#include "shell.h"
/**
 * print_out - a function to print to output
 * @msg: the string to be printed
 */



void print_out(const char *msg)
{
	write(STDOUT_FILENO, msg, strlen(msg));
}

