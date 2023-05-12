#include"main.h"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * check_arg - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check_arg(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_read - checks that file_from exists and can be read
 * @check: checks if -1
 * @file: file_from name
 *
 * Return: void
 */
void check_read(int check, char *file)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}
/**
 * check_write - checks that file_to was created and/or can be written to
 * @check: checks if -1
 * @file: file_to name
 * Return: void
 */
void check_write(int check, char *file)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
/**
 * check_close - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: accept integer number
 * @argv: pointer of character
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0;
	ssize_t num_bytes_read;
	char buf[1024];

	check_arg(argc);
	file_from = open(argv[1], O_RDONLY);
	check_read(file_from, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY |  O_TRUNC, PERM);
	check_write(file_to, argv[2]);

	num_bytes_read = read(file_from, buf, 1024);
	while (num_bytes_read > 0)
	{
		if (write(file_to, buf, num_bytes_read) != num_bytes_read)
			check_write(-1, argv[2]);
	}

	if (num_bytes_read == -1)
		check_read(-1, argv[1]);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from == -1)
		check_close(-1, file_from);

	if (file_to == -1)
		check_close(-1, file_to);
	return (0);
}


