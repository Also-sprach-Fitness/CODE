#include <stdio.h>
#define AMZ '!'
#define END '.'
int main(void)
{
    char ch;
    int replace=0;

    printf("Please enter:\n");

    while((ch=getchar())!='#')
    {
        if(ch=='!')
        {
            printf("%c%c",ch,ch);
            replace++;
        }
        else if(ch=='.')
        {
            printf("!");
            replace++;
        }
        else
            printf("%c",ch);
    }
    return 0;
}