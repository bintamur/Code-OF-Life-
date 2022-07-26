
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
