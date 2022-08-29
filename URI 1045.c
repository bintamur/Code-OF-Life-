#include<stdio.h>
int main()
{
    double A,B,C, temporary;
    scanf("%lf%lf%lf",&A,&B,&C);

if(A<B){
    temporary = A;
    A = B ;
    B = temporary;

}
if(A<C){
    temporary = A;
    A = C;
    C = temporary;

}
if(B<C){
    temporary = B;
    B = C ;
    C = temporary;

}
if(A>=B+C){
    printf("NAO FORMA TRIANGULO\n");
}
else
{
if(A*A == B*B+C*C){
    printf("TRIANGULO RETANGULO\n");
}
if(A*A > B*B+C*C){
    printf("TRIANGULO OBTUSANGULO\n");
}
if(A*A < B*B+C*C){
    printf("TRIANGULO ACUTANGULO\n");
}
if(A == B && A == C && B == C){
    printf("TRIANGULO EQUILATERO\n");
}
else if(A == B && A != C || A == C && A != B || B == C && B !=A){
     printf("TRIANGULO ISOSCELES\n");
 }

}
 return 0;
}
