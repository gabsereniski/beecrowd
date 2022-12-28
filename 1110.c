//1110
#include <stdio.h>
#include <stdlib.h>

typedef enum {false, true} bool;
typedef int data;

typedef struct node
{
	data info;
	struct node *next;
} node;

typedef struct stack
{
	node *first;
	node *last;
	int size;
} stack;

void initStack(stack *s)
{
	s->first = NULL;
	s->last = NULL;
	s->size = 0;
}

void deleteStack(stack *s)
{
	node *p = s->first;
	
	while(p)
	{
		s->first = s->first->next;
		free(p);
		s->size--;
		p = s->first;
	}
	
	s->last = NULL;
}

bool emptyStack(stack s)
{
	return (s.size == 0);
}

int push_back(stack *s, data x)
{
	node *aux = (node*)malloc(sizeof(node));
	
	if(aux == NULL)
		return 1;
	
	aux->info = x;
	aux->next = s->first;
	
	s->first = aux;
	
	if(s->last == NULL)
		s->last = aux;
	
	s->size++;
	
	return 0;
}

int push(stack *s, data x)
{
	node *aux = (node*)malloc(sizeof(node));
	
	if(aux == NULL)
		return 1;
	
	aux->info = x;
	aux->next = NULL;
	
	if(s->first == NULL)
		s->first = s->last = aux;
	
	else
	{
		s->last->next = aux;
		s->last = aux;
	}
	
	s->size++;
	
	return 0;
}

data pop(stack *s)
{
	node *aux = s->first;
	
	data head = s->last->info;
	
	if(s->first == s->last)
	{		
		free(s->first);
		s->last = s->first = NULL;
	}
	
	else
	{
		while(aux->next->next != NULL)
			aux = aux->next;
		
		s->last = aux;
		
		free(aux->next);
		
		s->last->next = NULL;
	}
	
	s->size--;
	
	return head;
}

int main()
{
	int n;
	
	while(scanf("%d",&n) && n)
	{
		int i;
		stack cards;
		
		initStack(&cards);
		
		for(i = n; i > 0; i--)
			push(&cards, i);
		
		int discarded[51] = {};
		i = 0;
		
		while(!emptyStack(cards))
		{
			discarded[i] = pop(&cards);
			i++;
			
			if(!emptyStack(cards))
			{
				int x = pop(&cards);
				push_back(&cards, x);
			}
			
		}
		
		printf("Discarded cards:");
		for(i = 0; i < n-1; i++)
		{
			printf(" %d", discarded[i]);
			if(i < n-2) printf(",");
		}
		printf("\n");
		
		printf("Remaining card: %d\n", discarded[i]);
	}
	
	return 0;
}