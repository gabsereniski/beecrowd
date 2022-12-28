//1200
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nl NULL

int i;

typedef enum{false, true} bool;
typedef char data;

typedef struct leaf
{
	data info;
	struct leaf *left;
	struct leaf *right;
} leaf;

typedef struct node
{
	leaf *info;
	struct node *next;
} node;

typedef struct list
{
	node *first;
	node *last;
	int len;
} list;

void initList(list *l)
{
	l->first = nl;
	l->last = nl;
	l->len = 0;
}

void deleteList(list *l)
{
	node *p = l->first;
	while(p)
	{
		l->first = l->first->next;
		free(p);
		l->len--;
		p = l->first;
	}
	l->last = nl;
}

bool emptyList(list l)
{
	return (l.len == 0);
}

data insertRight(leaf *x, list *l)
{
	node *aux = (node*)malloc(sizeof(node));
	if(aux == nl)
		return 1;
	
	aux->info = x;
	aux->next = nl;
	
	if(l->last == nl)
		l->first = aux, l->last = aux;
		
	else
	{
		l->last->next = aux;
		l->last = aux;
	}
	
	l->len++;
	return 0;
}

void removeFirst(list *l)
{
	node *aux = l->first;
	l->first = l->first->next;
	free(aux);
	
	if(l->first == nl)
		l->last = nl;
	
	l->len--;
}

leaf* head(list l)
{
	return(l.first->info);
}

void printBT(leaf *bt, int level)
{
	int i;
	
	if(!bt) return;
	
	printBT(bt->right, level + 1);
	for(i = 0; i < level; i++)
		printf("---|");
	printf("%c\n", bt->info);
	printBT(bt->left, level + 1);
}

leaf* BTinsert(data x, leaf *bt)
{	
	if(bt == nl)
	{
		leaf *aux = (leaf*)malloc(sizeof(leaf));
		if(aux == nl)
		{
			printf("Erro na alocação de folha.\n");
			return NULL;
		}
		
		aux->info = x;
		aux->left = nl;
		aux->right = nl;
		
		return aux;
	}
	
	if(x < bt->info)
	{
		bt->left = BTinsert(x, bt->left);
		return bt;
	}
	
	else
	{
		bt->right = BTinsert(x, bt->right);
		return bt;
	}
	
	return nl;
}

leaf *deleteLeaf(leaf *bt, data x)
{
	leaf *p1, *p2;
	
	if(bt->info == x)
	{
		if(bt->right == bt->left)
		{
			free(bt);
			return nl;
		}
		
		else if(bt->left == nl)
		{
			p1 = bt->right;
			bt = nl;
			
			return p1;
		}
		
		else if(bt->right == nl)
		{
			p1 = bt->left;
			bt = nl;
			
			return p1;
		}
		
		else
		{
			p2 = bt->left;
			p1 = bt->left;
			
			while(p1->right != nl)
				p1 = p1->right;
			
			p1->right = bt->right;
			bt = nl;
			
			return p2;
		}
	}
	
	if(bt->info > x)
		bt->left = deleteLeaf(bt->left, x);
	
	else
		bt->right = deleteLeaf(bt->right, x);
	
	return bt;
}

leaf* deleteTree(leaf* root)
{
	while(root != nl)
		root = deleteLeaf(root, root->info);
	
	return root;
}

void preOrder(leaf *root, char e[])
{
	if(root == nl) return;
	
	e[i] = root->info;
	i++;
	preOrder(root->left, e);
	preOrder(root->right, e);
}

void inOrder(leaf *root, char e[])
{
	if(root == nl) return;
	
	inOrder(root->left, e);
	e[i] = root->info;
	i++;
	inOrder(root->right, e);
}

void postOrder(leaf *root, char e[])
{
	if(root == nl) return;
	
	postOrder(root->left, e);
	postOrder(root->right, e);
	e[i] = root->info;
	i++;
}

void BForder(leaf *bt)
{
	leaf *root = bt;
	list queue;
	
	initList(&queue);
	
	if(root != nl)
	{
		insertRight(root, &queue);
		
		while(!emptyList(queue))
		{
			root = head(queue);
			removeFirst(&queue);
			
			if(root->left != root->right)
				printf(" ");
			printf("%c", root->info);
			
			if(root->left != nl)
				insertRight(root->left, &queue);
			
			if(root->right != nl)
				insertRight(root->right, &queue);
		}
	}
}

leaf* BTsearch(leaf *bt, data key)
{
	if(bt == nl) return nl;
	
	if(bt->info == key) return bt;
	
	if(key < bt->info)
		return BTsearch(bt->left, key);
	
	else
		return BTsearch(bt->right, key);
}


int main()
{	
	char comand[10] = {};
	leaf *tree = nl;
	
	while(scanf("%s",comand) != EOF)
	{
		getchar();
	
		if(!strcmp(comand, "I"))
		{
			char x;
			scanf(" %c",&x);
			
			tree = BTinsert(x, tree);
		}
		
		else if(!strcmp(comand, "P"))
		{
			char x;
			scanf(" %c",&x);
			
			leaf *key;
			
			key = BTsearch(tree, x);
			
			if(!key) printf("%c nao existe\n", x);
			else printf("%c existe\n", x);
		}
		
		i = 0;
		
		if(!strcmp(comand, "INFIXA"))
		{
			
			char e[100000] = {};
			inOrder(tree, e);
			
			int len = strlen(e);
			int j;
			for(j = 0; j < len; j++)
			{
				printf("%c",e[j]);
				if(j < len - 1)
					printf(" ");
			}
			puts("");
		}
		
		else if(!strcmp(comand, "PREFIXA"))
		{
			char e[100000] = {};
			preOrder(tree, e);
			
			int len = strlen(e);
			int j;
			for(j = 0; j < len; j++)
			{
				printf("%c",e[j]);
				if(j < len - 1)
					printf(" ");
			}
			puts("");
		}
		
		else if(!strcmp(comand, "POSFIXA"))
		{
			char e[100000] = {};
			postOrder(tree, e);
			
			int len = strlen(e);
			int j;
			for(j = 0; j < len; j++)
			{
				printf("%c",e[j]);
				if(j < len - 1)
					printf(" ");
			}
			puts("");
		}
	}
	
	return 0;
}