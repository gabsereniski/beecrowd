#include <stdio.h>
#include <string.h>
int main()
{
    
    int n;
    
    scanf("%d",&n), getchar();
    
    while(n--)
    {
		char s1[102], s2[102];
		int len, meio;
        
        gets(s1);
        
        len = strlen(s1);
        
        meio = len / 2;
        
        int i, j = 0;
        
        for(i = meio - 1; i >= 0; i--)
        {
            s2[j] = s1[i];
            j++;
        }
        
        j = meio;
        
        for(i = len-1; i >= meio; i--)
        {
            s2[j] = s1[i];
            j++;
        }
        
        s2[len] = '\0';
        
        puts(s2);
    }
    return 0;
}