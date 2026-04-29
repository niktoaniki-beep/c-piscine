#include<unistd.h>
#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
       i++; 
    }
    
    dest[i] = '\0';
   
  return dest;  
}

int main(void)
{
    char buffer[100];

    printf("%s\n", ft_strcpy(buffer, "hello"));

   return 0; 

}