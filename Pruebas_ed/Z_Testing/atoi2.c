#include <unistd.h>
#include <stdio.h>

int	atoi2(char *str, int base)
{
	int sig = 1;
	int result = 0;
	int i = 0;
	if(str[i] == '-')
	{
		sig = -1;
		str++;
	}
	while(str[i])
	{
		result *= base;
		if(str[i] >= '0' && str[i] <= '9')
			result += (str[i] - '0');
		// else if(*str >= 'a' && *str >= 'z')
		// 	result += (*str + 'a')- 10;
		// else if(*str >= 'A' && *str >= 'Z')
		// 	result += (*str + 'A')- 10;
		// write(1, &str, 1);
		i++;
	}
	return result * sig; 
}

int 	main(int args, char **argv)
{
	char *a;
	if(args < 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	a = atoi2(argv[1], 10);
	printf("atoi2= %d", a);
	// atoi2(args - 1, argv + 1);
	return 0;


}