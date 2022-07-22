#include<stdio.h>
int main()
{
    int p1,p2,u1,u2;
    double pr2,pr2,total;
    scanf("%d%d%lf",&p1,&u1,&pr1);
    scanf("%d%d%lf",&p2,&u2,&pr2);
    total=(u1*pr1)+(u2*pr2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
