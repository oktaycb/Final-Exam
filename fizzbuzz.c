#include <unistd.h>

void	oktaycb(int c) //putnbr
{
	if (c > 9)
		oktaycb(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}
int	main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			oktaycb(i);
		i++;
		write(1, "\n", 1);
	}
}