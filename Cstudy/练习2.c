#include <stdio.h>
int main(void)
{
    int num,numplus;
    printf("Please enter the initial value:\n");
    scanf_s("%d",&num);
    numplus=num+11;
    while(num < numplus)
    {
        printf("%d\t",num);
        num++;
    }
}