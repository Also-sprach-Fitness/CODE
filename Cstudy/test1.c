#include <stdio.h>
int what_if(int);
int main(void)
{
    int n=1;
    printf("%d",what_if(n));

    return 0;
}
int what_if(int n)
{
    double z = 100.0 / (double)n;
    return z;
}