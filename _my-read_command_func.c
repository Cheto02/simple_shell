#include "shell.h"
/**
 *mread_command - reads commands from the input
 *
 *
 *
 */


void mread_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
	if (feof(stdin))
	{
		print_out("\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		print_out("Error while reading input.\n");
		exit(EXIT_FAILURE);
	}
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline */
}
