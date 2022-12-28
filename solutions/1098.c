//1098.c
#include <stdio.h>
int main()
{
    double i, j, ij;
    int jf;
    for(i=0; i<=1.9; i+=0.2)
    {
        for(j=1.0; j<=3.0; j++)
        {
            ij = i+j;
            if((i==0.0)||(i==1.0)) printf("I=%.0lf J=%.0lf",i,ij);
            else if((ij==3.0)||(ij==4.0)||(ij==5.0)) printf("I=%.0lf J=%.0lf",i,ij);
            else printf("I=%.1lf J=%.1lf",i,ij);
            printf("\n");
        }
    }
    for(jf=3; jf<=5; jf++) printf("I=2 J=%d\n",jf);
    return 0;
}