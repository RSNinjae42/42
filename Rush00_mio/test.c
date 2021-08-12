#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void rush(int x, int y)
{
    int    a = 0;
    int    b = 0;
    
    while (a < x && b < y)
    {
        while (a == 0 || a == x-1)
        {
            if (b == 0 || b == y-1)
            {
                ft_putchar('o');
                b++;
                if (b == y)
                {
                ft_putchar('\n');
                a++;
                }
            }
            if ((b > 0 && a == 0) || (b < y-1 && a == 0) ||(b > 0 && a == x-1) || (b < y-1 && a == x-1))
            {
                ft_putchar('-');
                b++;
            }
        }
        
        
        while (a > 0 && a < x-1) 
        {
            if (b == 0 || b == y-1)
                {
                    ft_putchar('|');
                    b++;
                    if (b == y)
                    {
                        ft_putchar('\n');
                        a++;
                    }
                }
            while (b > 0 && b < y-1 && a > 0 && a < x-1)
            {
                if (b > 0 && b < y-1 && a > 0 && a < x-1)
                    {
                        ft_putchar(' ');
                        b++;
                    }
            }
        }
        a++;
    }
}

int main()
{
    rush(5, 5);
    return(0);
}