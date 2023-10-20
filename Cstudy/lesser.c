#include<stdio.h>
int imin(int,int);

int main(void)
{
    int evil1,evil2;

    printf("Enter a pair of integers (q to quit):\n");
    while(scanf("%d %d",&evil1,&evil2) ==2)
    {
        printf("The lesser of %d and %d is %d.\n",
              evil1,evil2,imin(evil1,evil2));
        printf("Enter another pair of intergers (q to quit):\n");
    }
    printf("Bye!");
}

int imin(int num1,int num2)
{
    int min;
    if(num1 < num2)
        min = num1;
    else
        min = num2;
    
    return min;
}