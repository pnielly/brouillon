#include <unistd.h>

int	main(void)
{
	char	i;

	i = '2';
	write(1, &i, 1);
	write(1, "\n", 1);
}
