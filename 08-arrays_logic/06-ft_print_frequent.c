#include<unistd.h>

void ft_print_moost_frequent(int *arr, int size)
{
    int i = 0;
    int j;
    int count;
    int value = 0;
    int most = 0;
    char f;

    while(i < size)
    {
        j = 0;
        count = 0;

          while(j < size)
          {
            if(arr[i] == arr[j])
            {
                count++;
            }
            j++;
          }

              if(count > most)
              {
                  most = count;
                  value = arr[i];
              }
       i++;   
    }

     if(most > 1)
     {
        f = value + '0';
        write(1, &f, 1);
     }

    write(1,"\n",1);
}


int main(void)
{
    int arr[] = {1,2,2,3,4,2,5};

      ft_print_moost_frequent(arr, 7);

   return 0;
}