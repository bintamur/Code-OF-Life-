#include<stdio.h>
int main()
{
    double pi = 3.14159, R, vol;
    scanf("%lf",&R);
    vol =(4.0/3)*pi*(R*R*R);
    printf("VOLUME = %.3lf\n",vol);
    return 0;
}
