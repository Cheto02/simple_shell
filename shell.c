#include "shell.h"
/**
 *main - program entry point
 *Return:0 success
 */
int main(void)
{
	char command[150];

	while (1)
	{
		shell_prompt();
		mread_command(command, sizeof(command));
		executorto_command("ls");

	}
	return (0);
}
