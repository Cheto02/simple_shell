#include "shell.h"
/*
 *
 */

int main(void)
{
	char command[150];

	while (1)
	{
		shell_prompt();
		mread_command(command, sizeof(command));
		myexecute_command(command);
	}
	return 0;
}
