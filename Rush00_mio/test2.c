#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void rush(int x, int y)
{
int a=0;
int b=0;

int n[4];
while (a < x){
  n[0] = !(a == 0 || b == 0 || a == x-1 || b == y-1)*(' ');
  n[1] = ((a == 0 && b == 0)||(a == 0 && b == y-1)||(a == x-1 && b == 0)||(a == x-1 && b == y-1))*('o');
  n[2] = (a == 0 && a == x-1) * ('-');
  n[3] = ((b == 0 && a > 0) || (b == 0 && a < x-1) || (b == y-1 && a > 0) || (b == y-1 && a < x-1)) * ('|');
  a++;
  b++;
ft_putchar (n[0] + n[1] + n[2] + n[3]);
}
}

int main()
{
    rush(5, 5);
    return(0);
}