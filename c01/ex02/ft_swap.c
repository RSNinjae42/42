#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;
    
    swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int real1;
    int real2;
    int *a;
    int *b;
    
    real1 = 420;
    real2 = 666;
    *a = real1;
    *b = real2;
    printf("%i,%i\n", real2, real1);
    printf("%i,%i\n", real1, real2);
}