#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int upper = 0;
    int lower = 0;
    while((ch = getchar()) != '#')
    {
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else
            continue;
    }
    
    printf("The upper:%d",upper);
    printf("The lower:%d",lower);

    return 0;
}