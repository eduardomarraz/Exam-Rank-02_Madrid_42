#include <stdio.h>
#include <unistd.h>

void	hidenp(char *str1, char *str2)
{
	int i = 0;
	int y = 0;
	int lenght_y = 0;
	while(str1[lenght_y])
		lenght_y++;
	while(str2[y])
	{
		if(str1[i] == str2[y])
		{
			i++;
		}
		y++;
	}
	if(i == lenght_y)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int		main(int args, char **argv)
{
	if(args != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	hidenp(argv[1], argv[2]);

}