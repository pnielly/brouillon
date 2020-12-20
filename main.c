#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int	r;
	char	*line;

	line = NULL;
	while ((r = get_next_line(&line)))
	{
		printf("%s\n", line);
//		printf("%d\n", r);
		free(line);
		line = NULL;
	}
	printf("%s", line);
//	printf("%d\n", r);
	free(line);
	line = NULL;
}
