#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int num=1;
    char ch;

    while((ch=getchar())!='#')
    {
        printf("%c(%d) ",ch,ch);
        num++;
        if(num>8)
        {
            printf("\n");
            num=1;
        };
    }
    return 0;
}