#ifndef _SHELL_H_
#define _SHELL_H_


#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>

void print_out(const char *msg);
void shell_prompt(void);
void mread_command(char *command, size_t size);
void myexecute_command(const char *command);
void execute_command(const char *command);


#endif /* SHELL_H */