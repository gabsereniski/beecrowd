#include <stdio.h>
#include <string.h>

int main()
{
	char A[13], B[13], C[13];
	scanf("%s%s%s", A, B, C);
	if (strcmp(A,"vertebrado")==0)
	{
		if(strcmp(B,"ave")==0)
		{
			if(strcmp(C,"carnivoro")==0) printf("aguia\n");
			else if(strcmp(C,"onivoro")==0) printf("pomba\n");
		}
		else if(strcmp(B,"mamifero")==0)
		{
			if(strcmp(C,"onivoro")==0) printf("homem\n");
			else if(strcmp(C,"herbivoro")==0) printf("vaca\n");
		}
	}
	else if(strcmp(A,"invertebrado")==0)
	{
		if(strcmp(B,"inseto")==0)
		{
			if(strcmp(C,"hematofago")==0) printf("pulga\n");
			else if(strcmp(C,"herbivoro")==0) printf("lagarta\n");
		}
		else if(strcmp(B,"anelideo")==0)
		{
			if(strcmp(C,"hematofago")==0) printf("sanguessuga\n");
			else if(strcmp(C,"onivoro")==0) printf("minhoca\n");
		}
	}	
	
	return 0;
}