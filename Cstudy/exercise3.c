#include <stdio.h>
int main(void)
{
    int salary=1;
    int days=1;
    int sum1,sum;
    int Alldays;
      
    printf("Please enter the sum of days:\n");
    scanf_s("%d",Alldays);
    while(days<=Alldays)
    {
        sum1=salary;
        salary++;
        days++;
        sum=salary+sum1;
        printf("The sum is %d.\n",sum);
        printf("Next alldays:\n");
        scanf_s("%d/n",&Alldays);
    }    
    return 0;
}