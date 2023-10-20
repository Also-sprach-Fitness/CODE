#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int guess = 0;
    int last = 0;
    int big,small;
    char juge;
    char handle;
    bool isbig = false;

    printf("Please guess a integer,and I will gues it,\n");
    printf("'s' to start.\n");

    if (getchar() == 's')
        printf("Is it %d?\n",guess);
    while((handle = getchar()) != '\n')
        continue;

    while((juge = getchar()) != 'y')
    {
        if (juge == 'b')
        {
            small = last;
            big = guess;
            last = guess;
            guess = (big + small)/2;
            isbig = true;
            printf("1\n");
        }
        if (juge == 's' && isbig == false)
        {
            last = guess;
            guess = guess + 50;
            isbig = false;
            printf("2\n");
        }
        if (juge == 's' && isbig == true)
        {
            small = guess;
            big = last;
            last = guess;
            guess = (big + small)/2;
            isbig = false;
            printf("3\n");
        }

        if (juge == 'b'||'s')
        {
            printf("I guess it is %d.\n",guess);
            printf("Right? big or small?\n");
            printf("Enter 'b' is big,'s' is small.\n");
            printf("'y' is right,'n' is wrong:\n");
        }
        else
            printf("Sorry,I can only understand 'b','s' and 'y'.\n");
        while((handle = getchar()) != '\n')
            continue;
    }

    printf("I just know I can do it!\n");
    return 0;
}