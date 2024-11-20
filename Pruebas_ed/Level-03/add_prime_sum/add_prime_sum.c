#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int	result = 0;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str)
	{
		result *= str_base;
		if (*str >= '0' && *str <= '9')
			result += (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			result += (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			result += (*str - 'A' + 10);
		str++;
	}

	return (result * sign);
}

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int	sum;

	sum = 0;
	while (n > 1)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	// Imprimir el resultado
	char buffer[12];
	int i = 0;
	if (sum == 0)
		write(1, "0\n", 2);
	else
	{
		while (sum > 0)
		{
			buffer[i++] = (sum % 10) + '0';
			sum /= 10;
		}
		while (--i >= 0)
			write(1, &buffer[i], 1);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2 || ft_atoi_base(argv[1], 10) <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	add_prime_sum(ft_atoi_base(argv[1], 10));
	return (0);
}
