#include <stdio.h>
 
int main() {
 
    int I, F, d;
	scanf("%d %d", &I, &F);
	if (I>=F) printf("O JOGO DUROU %d HORA(S)\n", 24-I+F);
	else printf ("O JOGO DUROU %d HORA(S)\n", F-I);
 
    return 0;
}