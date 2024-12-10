#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return sign * result;
}

// int		main(int argc, char **argv)
// {
// 	printf("ft_atoi= %d\n", ft_atoi(argv[1]));
// 	return 0;
// }