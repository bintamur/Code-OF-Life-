#include<stdio.h>
int main()
{
    double  a,b,c,d,e,k,sum;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    k=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1lf\n",k);
    if(k>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(k<5.0)
    {
      printf("Aluno reprovado.\n");
    }
    else if(k>=5.0 && k<=6.9)
    {
       printf("Aluno em exame.\n");
       scanf("%lf",&e);
       printf("Nota do exame: %.1lf\n",e);
       sum=(k+e)/2;
       if(sum>=5.0)
       {
        printf("Aluno aprovado.\n");
        }
else if (sum<=4.9)
{
    printf("Aluno reprovado.\n");
}
printf("Media final: %.1lf",sum);

    }
return 0;
}
