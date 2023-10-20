#include <stdio.h>
#include <stdbool.h>
#define COUNT 100
#define POUND1 5
#define POUND2 20
const double ARTICHOKE = 2.05;
const double BEET = 1.15;
const double CARROT = 10.9;
int main(void)
{
    double pound1,pound2,pound3,pound;
    double price,total;
    char vage;
    float tip;
    bool p_count;

    printf("Please choose the vagetable:\n");
    printf("a:artichoke\n");
    printf("b:beet\n");
    printf("c:carrot\n");//提示用户选择蔬菜类型
    vage=getchar();
    while(vage!='q')
    {
        switch(vage)
        {
            case 'a':
                printf("Please enter the weight of artichoke:\n");
                scanf("%lf",&pound1);
                break;
            case 'b':
                printf("Please enter the weight of beet:\n");
                scanf("%lf",&pound2);
                break;
            case 'c':
                printf("Please enter the weight of carrot.\n");
                scanf("%lf",&pound3);
                break;
            default:
                printf("Try again.\n");
        }
        printf("Enter another if you need to countinue.\n");
        vage=getchar();
    }//选择并统计蔬菜重量
    
    price = pound1*ARTICHOKE + pound2*BEET + pound3*CARROT;
    pound = pound1 + pound2 + pound3;//计算蔬菜价格和质量
    p_count = false;
    if(price>COUNT)
        {
        price = price*0.95;
        p_count = true;
        }//判定是否打折并计算打折后的价格

    if(pound <= POUND1)
        tip = 6.5;
    else if(pound <= POUND2 && pound >POUND1)
        tip = 14;
    else
        tip = 14+(pound-POUND2)*0.5;//打包和运费
    total = price - tip;//打包后的价格
    
    printf("The price of vagetables you buy is %lf\n",price+tip);
    printf("The weight is %lf\n",pound);
    printf("The total you should pay:%lf\n",total);
    if(p_count == true)
        printf("The count is 0.95.\n");//总结
    
    return 0;
}