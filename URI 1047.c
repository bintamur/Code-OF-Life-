#include<stdio.h>
int main()
{
    int a,b,c,d,h,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);


    if(a>c)
    {
        if(d>b)
        {
            h = (24-a)+c;
        }
        else if(b>d)
        {
            h = ((24-a)+c)-1;
        }
        else if(b==d)
        {

        }

    }
    else if(c>a)
    {
        if(d>b)
        {
            h = c-a;
        }
        else if(b>d)
        {
            h = (c-a)-1;
        }
        else if(b==d)
        {
            h = c-a;
        }
    }
    else if(a==c)
    {
        if(d>b)
        {
            h = 0;
        }
        else if(b>d)
        {
            h = 24 - 1;
        }

    }

    if(b>d)
    {
        m = (60 - b) + d;
    }
    else if(d>b)
    {
        m = d - b;
    }
    else if(b==d)
    {
        m = 0;
    }

    if(a==c && c==d)
    {
        h = 24;
        m = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
return 0 ;
}
