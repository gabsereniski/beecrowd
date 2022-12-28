//1549
#include <bits/stdc++.h>
using namespace std;

typedef double DD;

const double pi = acos(-1);
DD r, R, H;

DD volume(DD h)
{
	DD B = r + ((R - r) / H) * h;
	return ((pi*h)/3.0)*(r*r + r*B + B*B);
}

DD binary_search(DD key)
{
	DD u = H;
	DD d = 0.0;
	DD m;
	int i = 1000;
	
	while(i--)
	{
		m = (u + d) * 0.5;
		
		DD v = volume(m);
		
		if(v == key) return m;
		if(v < key)  d  =  m;
		else         u  =  m;
	}
	
	return m;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{ 
		DD p, ml;

		scanf("%lf%lf", &p, &ml);
		
		DD key = ml/p;
		
		scanf("%lf%lf%lf", &r, &R, &H);
		
		DD ans = binary_search(key);
		
		printf("%.2lf\n", ans);
	}
}