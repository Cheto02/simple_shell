#include "shell.h"
/**
 *myexecute_command - Function to execute a command
 *@command : pointer to command to be executed
 *
 *
 */
void myexecute_command(const char *command)
{
	pid_t child_pid = fork();/* create a child proccss */

	if (child_pid == -1)/*if the fork failed */
	{
		perror("fork"); /* print error and exit */
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)/* IF THE FORK WAS succesfull */
	{
		char *args[150]; /* create array to store up to 150 args */
		int ar_count = 0;/* start counting arguments from 0 */
		/*tokenize the command string */
		char *token = strtok((char *)command, " ");
		/* loop through the tokens */
		while (token != NULL)
		{
			args[ar_count++] = token;/* store tkn here*/
			token = strtok(NULL, " ");/* get the next tkn */
		}
		args[ar_count] = NULL;/* let the last argmt be null */

		execvp(args[0], args);/* execute comd with arguments */

		print_out("Error executing command.\n");/* if execvp fails */
		exit(EXIT_FAILURE);/* exit child */
	}
	else

	wait(NULL);/* wait for child to finish */
}
