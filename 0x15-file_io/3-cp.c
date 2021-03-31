#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * num_arg - checks number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void num_arg(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exist_file - checks if the file exists and can be read
 * @check: checks if it is -1
 * @filename: name of the file
 * @op_from: result to open file or -1
 * @op_to: result to openfile or -1
 *
 * Return: void
 */
void exist_file(ssize_t check, char *filename, int op_from, int op_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		if (op_from != -1)
			close(op_from);
		if (op_to != -1)
			close(op_to);
		exit(98);
	}
}

/**
 * created_file - checks if the file was created or can be written to
 * @check: checks if is -1
 * @filename: name of the file
 * @op_from: result open file or -1
 * @op_to: resul open file or -1
 *
 * Return: void
 */
void created_file(ssize_t check, char *filename, int op_from, int op_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (op_from != -1)
			close(op_from);
		if (op_to != -1)
			close(op_to);
		exit(99);
	}
}

/**
 * closed_file - checks if the file closed
 * @check: check if is -1
 * @op: result to open file
 *
 * Return: void
 */
void closed_file(int check, int op)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op);
		exit(100);
	}
}
/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of pointers of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int op_from, op_to, cl_to, cl_from;
	int rd, wr;
	char buffer[1024];

	num_arg(argc);
	op_from = open(argv[1], O_RDONLY);
	exist_file(op_from, argv[1], -1, -1);

	op_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	created_file(op_to, argv[2], op_from, -1);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(op_from, buffer, 1024);
		exist_file(rd, argv[1], op_from, op_to);
		wr = write(op_to, buffer, rd);
		if (wr != rd)
			wr = -1;
		created_file(wr, argv[2], op_from, op_to);
	}
	cl_to = close(op_to);
	cl_from = close(op_from);
	closed_file(cl_to, op_to);
	closed_file(cl_from, op_from);
	return (0);
}
