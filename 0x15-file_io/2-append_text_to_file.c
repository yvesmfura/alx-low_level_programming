#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to add to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;

		if (write(file, text_content, bytes_written) == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}

