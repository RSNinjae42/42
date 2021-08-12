#include <unistd.h>

void rush(int x, int y)
{
    int    a = x;
    int    b = y;
    
    while (a != x && b != y)
    {
        if ((a == 0 && b == 0) || (a == x-1 && b == 0) || (a == 0 && b == y-1) || (a == x-1 && b == y-1))
        {
            ft_putchar('o');
            b++; 
            if (a == x-1 && b == y-1)
            {
                ft_putchar('\n');
            }
        } else {
            if ((a != 0 && b == 0) || (a != 0 && b == y-1))
            {
                ft_putchar('|');
                if (a == x-1)
            {
                ft_putchar('\n');
            }
            } else {
                if (a != x && b != y)
                {
                    ft_putchar(' ');
                }
            }
            b++;
        }
        if ((a == 0 && b != 0) || (a == 0 && b != y-1) || (a == x-1 && b != 0) ||  (a == x-1 && b != y-1))
        {
            ft_putchar('-');
        }
        a++;
    }
}