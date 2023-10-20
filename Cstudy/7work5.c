#include <stdio.h>
#define AMZ '!'
#define END '.'
#define STOP '#'
int main(void)
{
    char ch;
    int replace=0;

    printf("Please enter:\n");

    while((ch=getchar())!= STOP)
    {
        switch(ch)
        {
        case '!':    
            printf("%c%c",ch,ch);
            replace++;
        case '.':
            printf("!");
            replace++;
        default:
            printf("%c",ch);
        }
    }
    return 0;
}