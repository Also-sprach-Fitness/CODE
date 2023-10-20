long get_long(void)
{
    long input;
    char ch;
    while(scanf("%ld",&input)!=1)
    {
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf("is not integer.\n");
    }
    return input;
}