#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length = 0, written;

	if (filename == NULL)
		return (-1);

	/*
     * O_CREAT: create file if it doesn't exist
     * O_WRONLY: open for writing only
     * O_TRUNC: if file exists, empty it (truncate it)
     */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* calculate length of the string manually */
		while (text_content[length])
			length++;

		written = write(fd, text_content, length);
		if (written == -1 || written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
