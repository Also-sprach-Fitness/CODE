#include <stdio.h>
void display(char cr,int lines,int width);
int main(void)
{
    int ch;
    int rows,cols;

    printf("Enter a character and two integers:\n");
    while((ch = getchar()) != '\n')
    {
        scanf("%d %d",&rows,&cols);
        display(ch,rows,cols);
        while (getchar()!='\n')
            continue;
        printf("Enter other group to continue.\n");
        printf("Enter another lines to quit.\n");
    }
    return 0;
}
void display(char cr,int lines,int width)
{
    int row,col;
    for(row=1;row<=lines;row++)
    {
        for(col=1;col<=width;col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }
}