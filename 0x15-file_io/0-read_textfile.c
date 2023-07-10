#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read from the file.
 * Return: The actual number of bytes read and printed on success,
 * 0 if the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;
	ssize_t total_bytes_written;
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
	return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
	return (0);
	}

	total_bytes_written = 0;
	while (total_bytes_written < bytes_read)
	{
	bytes_written = write(STDOUT_FILENO, buffer + total_bytes_written, bytes_read - total_bytes_written);
	if (bytes_written == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	total_bytes_written += bytes_written;
	}

	free(buffer);
	close(file_descriptor);
	return (total_bytes_written);
}
