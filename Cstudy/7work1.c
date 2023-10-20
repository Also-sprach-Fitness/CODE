#include <stdio.h>
#include <ctype.h>
#define ENTER '\n'
int main(void)
{
    char text;
    int nblank,nenter,allother;

    nblank = nenter = allother =0;

    printf("Please enter some text.\n");
    while((text=getchar()) != '#')
    {
        allother++;

        if(isblank(text))
            nblank++;
        if(text == ENTER)
            nenter++;
    }
    allother=allother-nblank-nenter;
    printf("There are %d %s,",nblank,nblank == 1||0 ? "blank" : "blanks");
    printf("%d %s,and %d other %s.\n",nenter,nenter==1||0 ? "enter" :"enters",allother,allother==1||0 ? "character" : "characters");
    return 0;
}