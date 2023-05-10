#ifndef MAIN_H
#define MAIN_H

#define USAGE  "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s \n"
#define ERROR_WRITE  "Error: Can't write to %s \n"
#define ERROR_CLOSE "Error: Can't close fd %d\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | IROTH)


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif


