//1068
#include <stdio.h>
#include <string.h>

typedef struct
{
	char v[300];
	int top;
} stack;

void start(stack *s)
{
	s->top=0;
}

void insert(stack *s, char new)
{
	s->v[s->top]=new;
	s->top++;
}

void poppy(stack *s)
{
	s->top--;
}

char getTop(stack *s)
{
	return s->v[s->top-1];
}

int isEmpty(stack *s)
{
	return !(s->top);
}

int main(void)
{
	char n[1002];
	
	while(scanf(" %s",n)!= EOF)
	{
		stack s;
		int i, incorrect = 0;
		start(&s);
		for(i=0;i<strlen(n);i++)
		{
			if(isEmpty(&s))
			{
				if(n[i] == ')')
				{
					incorrect = 1;
					break;
				}
				
				else if(n[i] == '(')
					insert(&s, n[i]);

				else
					continue;
			}
			else
			{
				if(n[i] == '(')
					insert(&s, n[i]);
					
				else if(n[i] == ')')
					poppy(&s);
			}
		}
		
		if(incorrect || !isEmpty(&s))
			printf("incorrect\n");
		
		else
			printf("correct\n");
	}
	
	return 0;
}