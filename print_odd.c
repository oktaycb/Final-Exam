#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	array[128] = {0};

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] > 32 || av[1][i] < 127 && av[1][i])
		{
			if (array[av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				array[av[1][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
