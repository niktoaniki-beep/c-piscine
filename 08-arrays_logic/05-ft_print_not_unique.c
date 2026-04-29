#include<unistd.h>

void ft_print_not_unique(int *arr, int size)
{
    int i = 0;
    int j;
    int count;
    int seen;
    char nu;

    while(i < size)
    {
        count = 0;
        j = 0; 

        while(j < size)
        {
            if(arr[i] == arr[j])
            {
               count++;
            }  
            j++; 
        }

        seen = 0;
        j = 0;
        
        while(j < i)
        {
            if(arr[i] == arr[j])
            {
                seen = 1;
            }
            j++;
        }

        if(count > 1 && seen == 0)
        {
            nu = arr[j] + '0';
            write(1, &nu, 1);
            write(1," ",1);
        }
        i++;
    }
    write(1,"\n",1);
}


int main(void)
{
    int arr[] = {1,3,2,4,1,5,2};
    
      ft_print_not_unique(arr, 7);
    
   return 0;   
}