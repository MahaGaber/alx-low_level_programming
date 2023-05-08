#include"main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters:number of letters
 *Return:number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_f;
	char *buffer;
	ssize_t num_bytes_read;
	ssize_t num_bytes_write;


	read_f = open(filename, O_RDONLY);
	if (read_f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	num_bytes_read = read(read_f, buffer, letters);
	num_bytes_write = write(STDOUT_FILENO, buffer,  num_bytes_read);
	free(buffer);
	close(read_f);

	return (num_bytes_write);
}



