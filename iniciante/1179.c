#include <stdio.h>
int main()
{
    int i,p[5],im[5],par=0,imp=0,a,j;

    while(scanf("%d",&a)==1)
    {
        if(a%2==0)
        {
                p[par]=a;
                 par++;
        }
        else
        {
            im[imp]=a;
            imp++;
        }
        if(par==5)
        {
            for (j = 0; j <= 4; j++)
            {
                printf("par[%d] = %d\n",j,p[j]);
                p[j]='\0';
            }
            par=0;
        }
         if(imp==5)
         {
            for (j = 0; j <= 4; j++)
            {
                printf("impar[%d] = %d\n",j,im[j]);
                im[j]='\0';
            }
            imp=0;
        }
    }

    for (j = 0; j <= 4; j++)
    {
        if (im[j] == '\0')
            break;
        printf("impar[%d] = %d\n", j, im[j]);
    }
    for (j = 0; j <= 4; j++)
    {
        if (p[j] == '\0')
            break;
        printf("par[%d] = %d\n", j, p[j]);
    }
    return 0;
}