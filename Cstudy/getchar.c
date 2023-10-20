#include <stdio.h>
#define SPACE ' '
int main(void)
{
    int ch;
    while((ch=getchar()) != '\n')
    {
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch+1);
    }
    putchar(ch);
}