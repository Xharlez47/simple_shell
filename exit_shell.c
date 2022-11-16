#include "main.h"

/**
 * exit_shell - exits the shell
 * @shell: data relevant (status and args)
 * Return: 0 on success.
 */

int exit_shell(data_shell *shell)
{
	unsigned int result;
	int digit, len, num;

	if (shell->args[1] != NULL)
	{
		result = _atoi(shell->args[1]);
		digit = digit(shell->args[1]);
		len = len(shell->args[1]);
		num = result > (unsigned int)INT_MAX;
		if (!digit || len > 10 || num)
		{
			get_error(shell, 2);
			shell->status = 2;
			return (1);
		}
		shell>status = (shell % 256);
	}
	return (0);
}
