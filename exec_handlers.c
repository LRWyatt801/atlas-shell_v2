#include "hsh.h"

/**
 * execute_command - executes CL input
 * @cmd_input: CL input to be executed
 *
 * Return: n/a
 */

void execute_command(char *cmd_input)
{
	parsed_line_t *cmd_tokens; // make a free func
	int numRedirects = 0;

	cmd_tokens = parse_input(&cmd_tokens, cmd_input, WHITESPACE);
	numRedirects = count_redirects(cmd_tokens);
	printf("number redirects = %d\n", numRedirects);
	// free_parsed_line(&cmd_tokens);

	return;
}

/**
 * exec_pipe_command - handles commands with pipes
 * @data: the list holding all the data
 * @num_pipes: number of pipes
 *
 * Return: no return
 */

void exec_pipe_command(MemNode data, int num_pipes)
{
	(void)data;
	(void)num_pipes;
	// create pipes
	//  for(int i = 0; i < pipes; i++)
	{
		// handle dup2
		// dup2(pipefd[i], stdout);
		// dup2(pipefd[i+1], stdin);
		// fork
		// if (pid = 0)
		// input_parser()
		// execute_command();
		// else
		// wait
	}
	return;
}

/**
 * freematrix - frees a matrix
 * @matrix: matrix to be freed
 *
 * Return: n/a
 */

void freematrix(char **matrix)
{
	return;
}
