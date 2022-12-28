//1195
#include <stdio.h>
#include <stdlib.h>

#define nl NULL

typedef enum{false, true} bool;

typedef struct leaf
{
	int info;
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

int insertRight(leaf *x, list *l)
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
	printf("%d\n", bt->info);
	printBT(bt->left, level + 1);
}

leaf* BTinsert(int x, leaf *bt)
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

leaf *deleteLeaf(leaf *bt, int x)
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

void preOrder(leaf *root)
{
	if(root == nl) return;
	
	printf(" %d", root->info);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(leaf *root)
{
	if(root == nl) return;
	
	inOrder(root->left);
	printf(" %d", root->info);
	inOrder(root->right);
}

void postOrder(leaf *root)
{
	if(root == nl) return;
	
	postOrder(root->left);
	postOrder(root->right);
	printf(" %d", root->info);
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
			
			printf(" %d", root->info);
			
			if(root->left != nl)
				insertRight(root->left, &queue);
			
			if(root->right != nl)
				insertRight(root->right, &queue);
		}
	}
}

leaf* BTsearch(leaf *bt, int key)
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
	int c;
	int t = 0;
	
	scanf("%d",&c);
	
	while(c--)
	{
		leaf* tree = nl;
		
		int leaves;
		
		scanf("%d",&leaves);
		
		while(leaves--)
		{
			int x;
			scanf("%d",&x);
			
			tree = BTinsert(x, tree);
		}
		
		printf("Case %d:\n", ++t);
		
		printf("Pre.:");
		preOrder(tree);
		puts("");
		
		printf("In..:");
		inOrder(tree);
		puts("");
		
		printf("Post:");
		postOrder(tree);
		puts("");
		
		puts("");
	}
	
	return 0;
}