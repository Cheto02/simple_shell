#include "shell.h"
/**
 *main - program entry point
 *Return:0 success 1 on failure
 */
int main(void)
{
	char command[150];

	while (1)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
