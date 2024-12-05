#include <stdio.h>
#include <unistd.h>

void duplicar(char *str)
{
	int i = 0;
	int j = 0;
	int found = 0;
	int index = 0;
	char dupli [256] = {0};

	while(str[i])
	{
		j = 0;
		found = 0;
		while(j < index)
		{
			if (dupli[j] == str[i])
            {
                found = 1;
                break;
            }
			j++;
        }	
        // Si no está duplicado, lo agregamos a 'dupli'
        if (found == 0)
        {
            dupli[index] = str[i];
            index++;
        }
        i++;
    }
    printf("duplicar= %s\n", dupli);
}
int		main()
{
	duplicar("padinton");
	return 0;
}