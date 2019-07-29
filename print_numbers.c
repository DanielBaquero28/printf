#include <stdio.h>

void print_numbers(int n)
{
int i, j = 1;
i = n;
while (i > 0)
{
i /= 10;
j *= 10;
}
j /= 10;
while (j > 0)
{
putchar(((n / j) % 10) + 48);
j /= 10;
}
}
int main(void)
{
int n = 45;
print_numbers(n);
return (0);
}
