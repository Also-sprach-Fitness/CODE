#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int n_words = 0;
    int n_alpha = 0;
    double average;
    bool inwords = false;

    printf("Please enter some text,# to quit:\n");
    while((ch = getchar()) != '#')
    {
        if(isalpha(ch))
        {
            inwords = true;
            n_alpha++;
        }
        if(inwords == true)
            n_words++;
        if(!isalpha(ch))
            inwords = false;
    }

    average = (double)n_alpha / n_words;
    printf("The number of alpha is %lf.\n",average);

    return 0;
}