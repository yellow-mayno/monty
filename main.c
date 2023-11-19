#include "monty.h"

int main(int argc __attribute__((unused)), char **argv)
{
	int i = 0; /* to browse line the array (not lines of the file)*/

	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		while ((read_status = read(fd, current, 1)) != 0) /* if file not over */
		{
			if (read_status == -1)
				return (EXIT_FAILURE);
			if (current[0] == 10)
			{
				execute_operation();
				i = 0;
			}
			else if (current[0] == 32 && strlen(line[i]))
				i++;
			else if (current[0] != ' ' && i < 2)
			{
				/* printf("%ld %d\n", strlen(line[i]), i); */
				line[i][strlen(line[i])] = current[0];
				line[i][strlen(line[i]) + 1] = '\0'; /* to have a propper \0 at the end*/
			}
			/* printf(" %c | %s | %s\n", current[0],  line[0], line[1]); */
		}
		execute_operation();
	}
	else
		return (EXIT_FAILURE);
	close(fd);
	return (0);
}

void empty_line(void)
{
	int i = 0;

	for (; i < 1000; i++)
	{
		line[0][i] = '\0';
		line[1][i] = '\0';
	}
}

void execute_operation(void)
{
	printf(" /// %s | %d\n", line[0], convert());
	empty_line();
	line_number++;
}

int convert(void)
{
	int i = 0, ret = INT_MIN + 1052000; /* good luck finding this value hahaha */
	/* this will be the code if non numerical */
	char c;

	while (line[1][i] != '\0')
	{
		ret = 0;
		c = line[1][i];
		if (c > 57 || c < 48)
			return (INT_MIN + 1052000); 
		ret = ret * 10 + (c - 48);
		i++;
	}
	return (ret);
}