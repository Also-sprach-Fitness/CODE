#include<stdio.h>
void pound(int n);
int main(void)
{
    int times = 17;
    pound(times);

    return 0;
}

void pound(int n)
{
    while(n-->0)
    {
        printf("尊嘟假嘟？\n");
    };
}