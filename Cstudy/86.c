#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    char ch;
    printf("Please enter a word.\n");
    ch = get_first();
    printf("It is %c.\n",ch);
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while (isblank(ch))
    {
        ch = getchar();
        continue;
    }
    while (getchar() != '\n')
        continue;
    return ch;
}