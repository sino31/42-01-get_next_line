#include "get_next_line.h"

int	main(int ac, char **av)
{
	int fd;
	char *line;

	if (ac != 2)
		return (1);
	fd = open(av[1], O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		write(1, line, ft_strlen(line));
		free(line);
	}
	return (0);
}