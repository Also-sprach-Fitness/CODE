#include <stdio.h>
int main(void)
{
    int num;
    int n_odd,n_even;
    int allodd=0;
    n_odd=n_even=0;

    printf("Please ente a numbers:\n");

    while(scanf("%d",&num)!=0)
    {
        if(num==0)
            break;
        if(num%2 == 0)
            n_even++;
        else
        {
            n_odd++;
            allodd=allodd+num;
        }
    }
    printf("The total of even number:%d\n",n_even);
    printf("The total of odd number:%d\n",n_odd);
    printf("The average of odd numbers:%d\n",allodd/n_odd);

    return 0;
}