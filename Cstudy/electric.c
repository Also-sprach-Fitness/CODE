#include <stdio.h>
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATTE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
const double BASE1=RATE1*BREAK1;
const double BASE2=BASE1+RATE2*(BREAK2-BREAK1);
const double BASE3=BASE2+RATE3*(BREAK3-BREAK2);
int main(void)
{
    double bill;
    double kwh;
    printf("Please enter the kwh used:");
    while((scanf("%lf",&kwh))==1)
    {
        if(kwh <= BREAK1)
            bill = kwh*RATE1;
        else if(kwh <= BREAK2) 
            bill = BASE1+RATE2*(kwh-BREAK1);
        else if(kwh <= BREAK3)
            bill = BASE2+RATE3*(kwh-BREAK2);
        else
            bill = BASE3+RATE3*(kwh-BREAK3);
       printf(" the bill is %lf.\n",bill); 
    }
    return 0;
} 