#include "shell.h"
/**
 * mread_command - reads commands from the input
 * @command: the buffer to store the input command
 * @size: the size of the buffer
 */
void mread_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
	if (feof(stdin))
	{
		print_out("\n");/* Print newline and exit on end of file */
		exit(EXIT_SUCCESS);
	}
	else
	{
		print_out("Error while reading input.\n");
		exit(EXIT_FAILURE);
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline */
}
}
