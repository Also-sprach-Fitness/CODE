#include <stdio.h>
int main(void)
{
    int m,n,o;
    char letter;
    printf("Please enter the first capital:\n");
    scanf_s("%c",&letter);

    for(m=1;m<6;m++)
    {
        for(n=0;n<m;n++,letter++)
        {
            printf("%c",letter);
        }
        for(o=0;o<m;o++,letter--)
        {
            printf("%c",letter);
        }
        printf("/n");
    }
    return 0;
}