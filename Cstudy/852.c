#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int guess = 0;
    int min,max;
    char juge;
    bool start = true;

    printf("Think a number in your mind,and I will guess it.\n");
    printf("'b' is bigger,'s' is small,'y' is right.\n");
    printf("Enter 's' to start:\n");

    if(getchar() == 's')
    {
        printf("Is it %d?\n",guess);
        while(getchar() != '\n')
            continue;
    }
    while((juge = getchar()) != 'y')
    {
        if (juge == 's'&&start == true)
        {
            min = guess;
            guess = guess + 50;
            max = guess;
            printf("1\n");
        }
        if (juge == 'b'&&start == true)
            start = false;
        if (juge == 'b'&&start == false)
        {
            max = guess;
            guess = (guess + min)/2;
            printf("2\n");
        }
        if (juge == 's'&&start ==false)
        {
            min = guess;
            guess = (guess + max)/2;
            printf("3\n");
        }
        if (juge != 'y'&&juge != 'b'&&juge != 's')
            printf("I can only understand 'b','s','y'.\n");
        printf("Is it %d?\n",guess);
        while(getchar() != '\n'); 
    }

    printf("I just know I can do it.\n");
    return 0;
}