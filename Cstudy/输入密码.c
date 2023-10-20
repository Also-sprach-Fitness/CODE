#include <stdio.h>
int main(void)
{
    int real_cue=13;
    int enter_cue;

    do
    {
        printf("Please enter the cue:\n");
        scanf("%d",&enter_cue);
    }while(enter_cue!=real_cue);
    printf("Congratulations!\n");
    return 0;
}