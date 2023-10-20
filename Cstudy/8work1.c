#include <stdio.h>
int main(void)
{
    int ch;
    int count = 0;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file:\n");
    scanf("%s",fname);
    fp = fopen(fname,"r");
    if (fp == NULL)
        printf("Failed to open the file.\n");
    while((ch=getc(fp)) != EOF)
        count++;
    printf("%d",count);
    fclose(fp);

    return 0;
}