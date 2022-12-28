#include <stdio.h>
#include <math.h>
#define g 9.80665
#define pi 3.14159

void main()
{
    double vx,yx,dist,v,a,tt,t,py,h,vy;
    int n,p1,p2;

    while(scanf("%lf",&h)!=EOF)
    {
        scanf("%d %d",&p1,&p2);
        scanf("%d",&n);
        while(n--)
        {
            scanf("%lf %lf",&a,&v);

            vx = v*cos((a*pi)/180);
            vy = v*sin((a*pi)/180);
           
            dist = (v*v)/g;
            dist = dist*(sin(2*((a*pi)/180)));
           
            tt = dist/vx;
            dist = dist/2;
            tt = tt/2;
           
            py = vy*tt - (g*tt*tt)/2;
            py = py+h;
           
            t = sqrt((2*py)/g);
           
            dist = dist + (t*vx);
           
            if(dist>p1 && dist<p2)
                printf("%.5lf -> DUCK\n",dist);
           
            else
                printf("%.5lf -> NUCK\n",dist);
        }
    }
}