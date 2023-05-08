#include "main.h"
/**
* append_text_to_file - appends text to the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret_val, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		ret_val = write(fd, text_content, len);
		if (ret_val == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
