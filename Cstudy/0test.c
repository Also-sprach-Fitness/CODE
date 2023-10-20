#include <stdio.h>
double isnum(void);
int main(void)
{
    double a;
    a = isnum();
    printf("%lf",a);

    return 0;
}
double isnum(void)
{
    double num;
    char ch;
    while(scanf("%lf",&num)!=1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf("is not a number.Try again.\n");
    }
    return num;
}