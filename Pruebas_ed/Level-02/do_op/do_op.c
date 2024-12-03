#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int    do_op(char *s1, char *sign, char *s3)
{
	int num1 = atoi(s1);
	int num3 = atoi(s3);
	if(sign[0] == '+')
		return num1 + num3;
	else if(sign[0] == '-')
		return num1 - num3;
	else if(sign[0] == '*')
		return num1 * num3;
	else if(sign[0] == '/')
		return num1 / num3;
	return 0;
}
int 	main(int args, char **argv)
{
	if (args != 4)
	{
		write(1, "\n", 1);
		return 1;
	}
	else
		printf("%d\n", do_op(argv[1], argv[2], argv[3]));
	return 0;
}