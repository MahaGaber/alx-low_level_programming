#include"main.h"

/**
 * append_text_to_file - appends a file.
 * @filename: pointer
 * @text_content:number of characters
 *Return:1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int creat_f, len_text = 0;
	int num_bytes_write;

	if (filename == NULL)
		return (-1);

	creat_f = open(filename, O_WRONLY | O_APPEND);
	if (creat_f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len_text])
			len_text++;
	}
	num_bytes_write = write(creat_f, text_content, len_text);
	if (num_bytes_write == -1)
		return (-1);

	close(creat_f);

	return (1);
}



