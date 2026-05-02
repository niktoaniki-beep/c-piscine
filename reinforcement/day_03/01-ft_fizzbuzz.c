#include <unistd.h>

void ft_fizzbuzz(void)
{
	int	i;
	char c;

	i = 0;
	while (i <= 99)
	{
		if (i % 3 == 0 && i % 5 == 0)
        {
		   write(1, "FizzBuzz", 8);
        }

		  else if (i % 3 == 0)
          {
			write(1, "Fizz", 4);
          }  
		
           else if (i % 5 == 0)
           {
			 write(1, "Buzz", 4);
           }    
		
        else
		{
			if (i < 10)
			{
				c = i + '0';
                {
				  write(1, &c, 1);
                }  
			}
			else
			{
				c = (i / 10) + '0';
				write(1, &c, 1);
				c = (i % 10) + '0';
				write(1, &c, 1);
			}
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_fizzbuzz();
	return (0);
}