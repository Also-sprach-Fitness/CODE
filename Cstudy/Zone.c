#include <math.h>
#include <stdio.h>
int main(void)
{
    int t_ct,limits;
    double time,sum,n;
    printf("Please enter the limit:\n");
    scanf_s("%d",&limits);

    for(n=1,sum=0,t_ct=1;t_ct<= limits ;t_ct++)
    {
        time = n/ t_ct;
        sum = sum + time;
        printf("When it run %d ,it take %f\n",t_ct,sum);
    }
    return 0;
}