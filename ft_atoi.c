int ft_atoi(char *str)
{
	int i;
	int s;
	int res;

	res = 0;
	s = 1;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t' && str[i])
		i++;
	if(str[i]== '-'  || str[i] == '+' && str[i])
			if(str[i++] == '-')
				s *= -1;
	while(str[i]>= '0' && str[i]<= '9' && str[i])
		res = str[i++] - '0' + (res * 10);
	return(res * s);
}