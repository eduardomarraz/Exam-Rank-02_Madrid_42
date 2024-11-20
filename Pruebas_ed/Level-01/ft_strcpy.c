#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

int main()
{
    char *str1;
    char *str2 = "te echaba de menos, espero que nos encontremos aunque se acabe todo sabes, me gustaria haber podido pasar mas tiempo juntos. Yo te he amado con todo mi corazon y queria estar contigo para siempre, es un pena por que yo te sigo queriendo mucho nunca podre olvidarme de ti. Has sido una de las cosas mas hermosas y maravillosas que he vivido y me siento feliz de haberlo podido experimentar y sobre todo feliz por haberte conocido";
    
    str1 = malloc(sizeof(char) * (strlen(str2) + 1));
    printf("%s", ft_strcpy(str1, str2));

    return 0;
}
