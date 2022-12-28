#include <stdio.h>
#define max 10
int main()
{
    int e, a, nc, i, v, menor=101, ig=0;
    int n[max], dif[max];
    scanf("%d",&e);
    while(e--)
    {
        scanf("%d%d",&a,&nc);
        
        for(i=0;i<a;i++)
            scanf("%d",&n[i]);
        for(i=0;i<a;i++)
        {
            if(n[i]==nc)
            {
                v=i;
                ig=1;
                break;
            }
        }
        if(ig==0)
        {
			for(i=0;i<a;i++)
			{
				dif[i]=nc-n[i];
				if(dif[i]<0)
					dif[i]*=-1;
			}       
			for(i=0;i<a;i++)
			{
				if(dif[i]<menor)
				{
					menor=dif[i];
					v=i;
				}
			}
		}
        
        printf("%d\n",v+1);
        ig=0;
        menor = 101;
    }
    
    return 0;
}