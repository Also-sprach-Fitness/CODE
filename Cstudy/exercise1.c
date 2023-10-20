#include <stdio.h>
const int a_week = 7;
int main(void)
{
    int days = 1;
    int week,left;
    while(days>0)
    {
    printf("Please enter the time:\n");
    scanf_s("%d",&days);
    week=days/a_week;
    left=days%a_week;
    printf("%d days are %d weeks,%d days.\n",days,week,left);
    }
    return 0;
}