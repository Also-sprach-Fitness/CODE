#include <stdio.h>
int main(void)
{
    char characters[26];
    char letter = 'a';
    int index;

    for(index = 0;index < 26;index++)
    {
        characters[index] = letter + index;
    }
    for(index=0;index < 26;index++)
    {
        printf("%c",characters[index]);
    }
}