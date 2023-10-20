#include<stdio.h>
int main()
{
    float a = 0.0f;
    float b = 0.0f;
    float h = 0.0f;
    float area = 0.0f;
    printf("Please enter\n");
    scanf("%f%f%f",&a,&b,&h);
    printf("%f%f%f",a,b,h);
    area = (a + b)*h / 2;
    printf("The square:%f",area);
    return 0;
}