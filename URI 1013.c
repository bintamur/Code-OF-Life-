#include<stdio.h>
int main()
{
    int a,b,c,ma1,ma2;
    scanf("%d%d%d",&a,&b,&c);
    ma1=((a+b+abs(a-b))/2);

    ma2=((ma1+c+abs(ma1-c))/2);

    printf("%d eh o maior\n",ma2);
    return 0;


}
