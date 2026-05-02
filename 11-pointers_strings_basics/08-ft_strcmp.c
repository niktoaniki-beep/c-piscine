#include<unistd.h>
#include<stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while((*s1 && *s2) && *s1 == *s2)
    {
        s1++;
        s2++;
    }
   return(*s1 - *s2);
}

int main(void)
{
    int n;
    
//    ft_strcmp("abc", "abc");
    n = ft_strcmp("abc", "abd");
//    ft_strcmp("abe", "abd");

     printf("%d\n", n);

     return 0;
}