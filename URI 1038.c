#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d%d",&x,&y);
   if(x==1)
   {
       double k= 4.00*y;
       printf("Total: R$ %.2lf\n",k);
   }
   else if(x==2)
   {
       double k=4.50*y;
       printf("Total: R$ %.2lf\n",k);
   }
   else  if(x==3)
   {
       double k=5.00*y;
       printf("Total: R$ %.2lf\n",k);
   }
   else if(x==4)
   {
       double k=2.00*y;
       printf("Total: R$ %.2lf\n",k);
   }
   else if(x==5)
   {
       double k=1.50*y;
       printf("Total: R$ %.2lf\n",k);
   }
   return 0;
}
