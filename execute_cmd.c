#include "shell.h"

/**
 * execute_cmd - will execute command using fork
 * @full_cmd: full path of command
 * @tokns: tokens array
 */

void execute_cmd(char *full_cmd, char **tokns)
{
	pid_t child_pid;
	int child_status;

	child_pid = fork();
	if (child_pid == -1)
	{
		free(full_cmd);
		free_mem(tokns);
		perror("from fork");
		exit(1);
	}
	else if (child_pid == 0)
	{
		if (execve(full_cmd, tokns, environ) == -1)
		{
			free(full_cmd);
			free_mem(tokns);
			perror("Execution failed");
			exit(1);
		}
	}
	else
	{
		do {
			waitpid(child_pid, &child_status, WUNTRACED);
		} while (!WIFEXITED(child_status) && !WIFSIGNALED(child_status));
		free(full_cmd);
		free_mem(tokns);
	}
}
