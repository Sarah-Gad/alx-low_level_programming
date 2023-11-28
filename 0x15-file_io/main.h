#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * struct file - a file structure
 * @name: name of the file
 * @fd: file descriptor
*/
typedef struct
{
	char *name;
	int fd;
} file_t;


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
