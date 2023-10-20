#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index;//数组下标
    int score[SIZE];//数组

    int sum;//总和

    float average;//平均
    printf("Please enter %d golf scores",SIZE);
    for(index=0;index<SIZE;index++)
    {
        scanf("%d",&score[index]);
    }

    printf("The scores read in are as follow:\n");
    for(index=0;index<SIZE;index++)
    {
        printf("%d \t",score[index]);
    }

    for(index=0,sum=0;index<SIZE;index++)
    {
        sum=sum+score[index];
    }
    printf("The sum is %d",sum);

    average=sum/SIZE;
    printf("The average scores is %f",average);

    return 0;

}