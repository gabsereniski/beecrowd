//1022
#include <stdio.h>
int mdc(int a, int b)
{
	int aux;
	while(a)
	{
		aux=a;
		a=b%a;
		b=aux;
	}
	return b;
}
typedef struct
{
	int n, d;
}rac;

rac soma(rac a, rac b)
{
	rac r;
	r.n = a.n*b.d + b.n*a.d;
	r.d = a.d*b.d;
	return r;
}
rac sub(rac a, rac b)
{
	rac r;
	r.n = a.n*b.d - b.n*a.d;
	r.d = a.d*b.d;
	return r;
}
rac mul(rac a, rac b)
{
	rac r;
	r.n = a.n*b.n;
	r.d = a.d*b.d;
	return r;
}
rac div(rac a, rac b)
{
	rac r;
	r.n = a.n*b.d;
	r.d = a.d*b.n;
	return r;
}
int main()
{
	rac a, b, r, rs;
	int n, simp;
	char op;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d / %d  %c %d / %d",&a.n,&a.d,&op,&b.n,&b.d);
		switch(op)
		{
			case '+': r = soma(a,b); break;
			case '-': r = sub(a,b); break;
			case '*': r = mul(a,b); break;
			case '/': r = div(a,b); break;
		}
		simp = mdc(r.n,r.d);
		rs.n = r.n/simp;
		rs.d = r.d/simp;
		if(rs.d<0)
		{
			rs.d*=-1;
			rs.n*=-1;
		}
		printf("%d/%d = %d/%d\n",r.n,r.d,rs.n,rs.d);
	}
	return 0;
}