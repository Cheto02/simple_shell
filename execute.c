#include "shell.h"
/**
 * execute_command- executes a given command
 * @command: a pointer to a const representing the command to be executed
 */
void execute_command(const char *command)
{
	pid_t child_pid = fork();/*create a child process */

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
