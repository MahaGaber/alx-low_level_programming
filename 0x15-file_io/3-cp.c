#include"main.h"
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

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY |  O_TRUNC, PERM);
	if (file_to == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);
	num_bytes_read = read(file_from, buf, 1024);
	while (num_bytes_read > 0)
	{
		if (write(file_to, buf, num_bytes_read) != num_bytes_read)
			dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);
	}

	if (num_bytes_read == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file_from), exit(100);
	if (file_to == -1)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file_to), exit(100);

	return (0);
}


