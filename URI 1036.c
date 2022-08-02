#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,n,R1,R2;
    scanf("%lf%lf%lf",&a,&b,&c);
    n=((b*b)-4*a*c);
    if (n>0)
    {
        R1=((-b+sqrt(n))/(2*a));
        printf("R1 = %lf\n",R1);
        R2=((-b-sqrt(n))/(2*a));
         printf("R2 = %lf\n",R2);
    }
    else
   {
        printf("Impossivel calcular\n");
    }



    return 0;
}
