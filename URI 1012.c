/* the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.*/
#include<stdio.h>
int main()
{
    float A,B,C;
    double tri,cr,tr,sq,re,pi = 3.14159;
    scanf("%f%f%f",&A,&B,&C);
    tri = (0.5)*(A*C);
    cr = pi*(C*C);
    tr= ((A+B)/2)*C;
    sq = B*B;
    re = A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cr);
    printf("TRAPEZIO: %.3lf\n",tr);
    printf("QUADRADO: %.3lf\n",sq);
    printf("RETANGULO: %.3lf\n",re);
    return 0;


}
