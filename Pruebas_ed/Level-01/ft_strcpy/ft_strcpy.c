#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	// char *temp;
	// while(s1[i])
	// {
	// 	temp[i] = s1[i];
	// }

	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	// i++;
	s1[i] = '\0';
	//write(1, "\0", 1);
	return s1;
}

// int 	main(int args, char **argv)
// {
// 	char *punt;
// 	// if(args != 2)
// 	// {
// 	// 	write(1, "\n", 1);
// 	// 	return 0;
// 	// }
// 	printf("ft_strcpy= %s\n" ,ft_strcpy(punt, "agbggdb"));
// 	printf("original_strcpy= %s\n" ,strcpy(punt, "agbggdb"));
// 	// printf("ft_strcpy= %s\n" ,ft_strcpy(args - 1, argv + 1));
// 	// printf("original_strcpy= %s\n" ,strcpy(args - 1, argv + 1));
// }