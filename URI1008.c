#include<stdio.h>
int main()
{
    int N,A;
    double h,salary;
    scanf("%d%d",&N,&A);
    scanf("%lf",&h);
    salary=A*h;
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;

}
