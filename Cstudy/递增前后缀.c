#include <stdio.h>
int main(void)
{
    int a=1,b=2;
    int a_pro,b_post;

    a_pro=++a;
    b_post=b++;
    printf("a a_pro b b_post\n");
    printf("%d  %d    %d  %d",a,a_pro,b,b_post);

    return 0;
}