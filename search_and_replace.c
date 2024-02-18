#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
// ./a.out "oktay" "ya" "zk"
// ac 1      2       3   4
// av 0      1 		 2   3
	if (ac == 4)
	{
		while (av[1][i])
		{
			if (av[2][1] && av[3][1])
			{
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
