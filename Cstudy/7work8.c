#include <stdio.h>
#define PAY1 8.75
#define PAY2 9.33
#define PAY3 10.00
#define PAY4 11.20
#define LIMIT 40
#define TIMES 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define TAX1 45
#define TAX2 75
int main(void)
{
    int hours;
    int index;
    double pay;
    double salary,tax,net;

    printf("Please choose the pay grade:\n");
    while(scanf("%d",&index)!=0)
    {
        switch(index)
        {
            case 1:
                pay = PAY1;
                break;
            case 2:
                pay = PAY2;
                break;
            case 3:
                pay = PAY3;
                break;
            case 4:
                pay = PAY4;
                break;
            case 5:
                printf("Try again.\n");
                continue;
        }
        printf("The pay you chosen is %f\n",pay);

        printf("Please enter the hours you work this week:\n");
        scanf("%d",&hours);
        if(hours<=40&&hours>=0)
            salary=hours*pay;
        else if(hours<=168&&hours>=40)
            salary=LIMIT*pay+(hours-LIMIT)*TIMES*pay;
        else
        {
            printf("Are you donkey?That's impossible.Try again.");
            continue;
        }

        if(salary<300)
            tax=salary*RATE1;
        else if(salary>=300&&salary<450)
            tax=(salary-300)*RATE2+TAX1;
        else
            tax=(salary-450)*RATE3+TAX2;
        net=salary-tax;
        printf("The salary you earn:%f\n",salary);
        printf("The tax you should submit:%f\n",tax);
        printf("The net salary you get:%f\n",net);
    }
    return 0;
}