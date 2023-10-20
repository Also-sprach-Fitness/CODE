#include <stdio.h>
#include <stdlib.h>
double get_double(void);
int main(void)
{   
    double start;
    double upper;
    double lower;
    double hight;
    double area;

    printf("Please enter some floating-point number\n");
    printf("to calculate the area of the trapezoid,\n");
    printf("or a 'q' to quit.\n");
    printf("Now enter the upper edge:\n");

    while((upper = get_double()) != 0)
    {
        printf("Then the lower edge:\n");
        lower = get_double();
        printf("Last,the hight:\n");
        hight = get_double();
        area = (upper + lower) * hight / 2;
        printf("The area of the trapezoid is %lf.\n",area);

        printf("Enter another upper edge or 'q':\n");
    }

}

double get_double(void)
{
    double input;
    char ch;

    while(scanf("%lf",&input) != 1)
    {
        if (getchar() == 'q')
            exit(0);
        while((ch=getchar()) != '\n')
            continue;
        printf("Please enter the correct form.\n");
        printf("Such as 10.0,41.0 or 'q'.\n");
    }
    return input;
}