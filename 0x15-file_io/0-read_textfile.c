#include "main.h"

/**
* read_textfile - Reads a text file and prints it to standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read from the file.
*
* Return: If successful, the number of letters read and printed;
*         otherwise, 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (!buf)
return (0);

bytes_read = read(fd, buf, letters);
if (bytes_read == -1)
{
free(buf);
close(fd);
return (0);
}

buf[bytes_read] = '\0';

bytes_written = write(STDOUT_FILENO, buf, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);

return (bytes_written);
}
