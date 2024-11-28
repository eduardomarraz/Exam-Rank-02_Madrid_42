#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char digit;

	if (nb > 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write (1, &digit, 1);
}

int 	main(int args, char **argv)
{
	int num = 0;
	char a;
	if(args < 2)
	{
		write(1,"0\n",2);
		return 0;
	}
	while(num < args)
	{
		num++;	
	}
	num--;
	ft_putnbr(num);

	write(1, "\n", 1);
	return 0;

}