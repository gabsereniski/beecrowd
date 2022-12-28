//1145
#include <stdio.h>
int main()
{
    int X,Y,z,i,j=0;
    scanf("%d%d", &X,&Y);
    for(i=1;i<=Y;i++)
    {
        j++;
        if(j==X) printf("%d",i);
        else printf("%d ",i);
        if(j==X)
        {
            j=0;
            printf("\n");
        }
    }
    
    return 0;
}