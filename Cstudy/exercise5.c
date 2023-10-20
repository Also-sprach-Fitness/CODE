#include <stdio.h>
int main(void)
{
    int num,a;
    for(num=1;num<6;num++)
    {
        for(a=0;a<num;a++)
        {
            printf("#");
        }
        printf("\n");
    }
}