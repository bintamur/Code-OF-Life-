#include<stdio.h>
int main()
{
    int time,distance;
    float dl;
    scanf("%d%d",&time,&distance);
    dl= ((distance*time)/12.0);
    printf("%.3f\n",dl );
    return 0;
}
