#include "main.h"

/**
* create_file - responsible for creating a file using the provided name and content.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to the content to write to the file.
* Return: If the function fails, returns -1.
* Otherwise, returns 1.
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[content_length])
		content_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text_content, content_length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
