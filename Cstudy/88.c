#include <stdio.h>
#include <ctype.h>
double isnum(void);
int main(void)
{
    double num1,num2;
    double result;
    char choice;

    while(1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a.add           s.subtract\n");
        printf("m.multiply      d.divide\nq.quit\n");
        if((scanf("%c",&choice) != 1)||((choice != 'a')&&(choice != 's')&&(choice != 'm')&&(choice != 'd')&&(choice != 'q')))
        {
            printf("Please enter the correct choice\n");
            while(getchar() != '\n')
                continue;
            continue;
        }

        printf("Please enter the first number:\n");
        num1 = isnum();
        printf("Then,the second:\n");
        num2 = isnum();

        if(choice == 'a')
        {
            result = num1 + num2;
            printf("%.1lf + %.1f = %.1f\n",num1,num2,result);
        }
        if(choice == 's')
        {
            result = num1 - num2;
            printf("%.1lf - %.1f = %.1f\n",num1,num2,result);
        }
        if(choice == 'm')
        {
            result = num1 * num2;
            printf("%.1lf * %.1f = %.1f\n",num1,num2,result);
        }
        if(choice == 'd')
        {
            result == num1 / num2;
            printf("%.1lf / %.1f = %.1f\n",num1,num2,result);
        }
        if(choice == 'q')
            break;
    }
    printf("Bye.\n");
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