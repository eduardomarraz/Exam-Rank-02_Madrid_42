#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1); // Escribe cada carácter de la cadena en stdout
}