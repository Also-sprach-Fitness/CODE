#include <stdio.h>
double power(double n,int p);
int main(void)
{
    double x;
    double xpow;
    int exp;
    printf("底数，指数:\n");

    while(scanf("%lf%d",&x,&exp)==2)
    {
        xpow = power(x,exp);

        printf("%lf",xpow);
    }
    return 0;
}

double power(double n,int p)
{
    double pow = 1;
    int i;
    for(i = 1; i<=p; i++)
    {
        pow *= n;
    }
    return pow;
}