int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (n % i == 0 && n > 1)
		n /= i;
	return (n == 1);
}
