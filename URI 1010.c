#include<stdio.h>
int main()
{
    int a,b,c,d;
    double e,f,bil;
    scanf("%d%d%lf",&a,&b,&e);
    scanf("%d%d%lf",&c,&d,&f);
    bil=(b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",bil);
    return 0;
}
