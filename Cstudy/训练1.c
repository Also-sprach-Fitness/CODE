#include <stdio.h>
const int S_PER_M =60;
const int S_PER_H =3600;
const int K_M = 1000;
int main(void)
{
    double distk,distm;
    double rate;
    int min,sec;
    int times;
    int mmin,msec;
    double mtimes;

    printf("This program converts your time for a meter race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter ,in kilommeeters,the distance run.\n");
    scanf_s("%lf",&distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf_s("%d",&min);
    printf("Now enter the seconds.\n");
    scanf_s("%d",&sec);

    times = min*S_PER_M + min;
    distm = distk*K_M;
    rate = distm/times*S_PER_H;
    mtimes = (double)times / distm;
    mmin = (int)mtimes / S_PER_M;
    msec = (int)mtimes%S_PER_M;

    printf("You ran %1.2f km (%1.2f miles) in %d min,%d sec.\n",distk,distm,min,sec);
    printf("That pace corresponds to running a mile in %d min,",mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);

    return 0;

}