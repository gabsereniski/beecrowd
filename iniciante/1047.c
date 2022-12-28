#include <stdio.h>
int main()
{
    int H1, H2, M1, M2, M, H;
    scanf("%d%d%d%d", &H1, &M1, &H2, &M2);
    if((H1==M2) && (H2==M2) && (M2==M1))
    {
        M=M1-M2;
        H=24+H1-H2;
    }
    else if((H1==H2) && (M2>M1))
    {
        M=M2-M1;
        H=H1-H2;
    }
    else if((H1==H2) && (M1>M2))
    {
        M=60-M1+M2;
        H=24-H1+H2-1;
    }
    else if((M1==M2) && (H1<H2))
    {
        M=0;
        H=H2-H1;
    }
    else if((M1==M2) && (H1>H2))
    {
        M=0;
        H=24-H1+H2;
    }
    else if((H2>H1) && (M2>M1))
    {
        M=M2-M1;
        H=H2-H1;
    }
    else if((H1<H2) && (M1>M2))
    {
        M=60-M1+M2;
        H=H2-H1-1;
    }
    else if((H1>H2) && (M1<M2))
    {
        M=M2-M1;
        H=24-H1-1+H2;
    }
    else if((H1>H2) && (M1>M2))
    {
        M=60+M2-M1;
        H=24+H2-H1-1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    
    return 0;
}