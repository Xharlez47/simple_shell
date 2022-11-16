#ifndef  _MAIN_H_
#define  _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct data
{
	char **av;
	char *input;
	char **args;
	int status;
	int counter;
	char **_environ;
	char *pid;
} data_shell;

#endif
