//indiana
#include <bits/stdc++.h>
using namespace std;

#define MAXN 1

typedef double dd;
const double EPS = 1e-9;
const double INF = 1e32;

struct pt {
	dd x, y;
	
	pt() {}
	pt(dd a, dd b) : x(a), y(b) {}
	pt(pair<pt, pt> l) { (*this) = l.second - l.first; }
	
	dd norm()        { return hypot(x, y);                }
	dd norm_sq()     { return x*x + y*y;                  }
	void normalize() { double l = norm(); x /= l, y /= l; }

	pt operator+(pt a) { return pt(x + a.x, y + a.y); }
	pt operator-(pt a) { return pt(x - a.x, y - a.y); }
	pt operator*(dd s) { return pt(x * s,   y * s  ); }
	dd dot(pt a)   { return x * a.x + y * a.y; }
	dd cross(pt a) { return x * a.y + y * a.x; }
	
	bool operator<(pt a) const
	{
		if(fabs(x - a.x) > EPS) return x < a.x;
	    if(fabs(y - a.y) > EPS) return y < a.y;
	    return 0;
	}
	
	bool operator==(pt a) const
	{
		return fabs(x - a.x) < EPS && fabs(y - a.y) < EPS;
	}
	
	void print() { printf("(%.2f, %.2f) ", x, y); }
};

typedef pair<pt, pt> line;
typedef pair<pt, pt> seg;
#define p1 first
#define p2 second

dd dist(pt a, pt b) { return (a - b).norm(); }
dd trap(pt a, pt b) { return 0.5 * (b.x - a.x) * (b.y + a.y); }
dd triarea(pt a, pt b, pt c)
{
	return fabs(trap(a, b) + trap(b, c) + trap(c, a));
}

int side_sign(line l, pt p)
{
	dd sg = (l.p1 - p).cross(l.p2 - p);
	
	if(fabs(sg) < EPS) return 0;
	if(sg > 0) return 1;
	return -1;
}

bool is_point(seg s)
{
	return s.p1 == s.p2;
}

bool on_seg(seg s, pt p)
{
	return p.x >= min(s.p1.x, s.p2.x) && p.x <= max(s.p1.x, s.p2.x)
	    && p.y >= min(s.p1.y, s.p2.y) && p.y <= max(s.p1.y, s.p2.y);
}

dd dist2line(line l, pt p)
{
	dd b = dist(l.p1, l.p2);
	dd a = triarea(l.p1, l.p2, p);
	return 2 * a / b;
}

dd dist2seg(seg s, pt p)
{
	pt ab(s);
	dd u = ab.dot(p - s.p1) / ab.norm_sq();
	
	if(u < 0) return dist(p, s.p1);
	if(u > 1) return dist(p, s.p2);
	return dist2line(s, p);
}

bool seg_intersect(seg a, seg b)
{
    int d1 = side_sign(line(a.p1, b.p2), b.p1);
    int d3 = side_sign(line(b.p1, a.p2), a.p1);
    int d2 = side_sign(line(a.p2, b.p2), b.p1);
    int d4 = side_sign(line(b.p2, a.p2), a.p1);
    
    if(d1 * d2 < 0 && d3 * d4 < 0) return 1;
    return 0;
}

double dist_seg2seg(seg a, seg b)
{
	if(is_point(a) && is_point(b))
	{ 
		return dist(a.p1, b.p1);
	}
	
	if(is_point(a))
	{
		return dist2seg(b, a.p1);
	}
	
	if(is_point(b))
	{
		return dist2seg(a, b.p1);
	}
	
	if(seg_intersect(a, b)) return 0;
	dd d1 = min(dist2seg(a, b.p1), dist2seg(a, b.p2));
    dd d2 = min(dist2seg(b, a.p1), dist2seg(b, a.p2));
    
    return min(d1, d2);
}


seg make_seg(int x, int y, int l)
{
	seg s; s.p1.x = x, s.p1.y = y;
	
	if(l > 0) s.p2.x = x + l, s.p2.y = y;
	else      s.p2.x = x, s.p2.y = y - l;
	 
	return s;
}

typedef pair<double, int> pp;
#define dist first
#define id second

double prim(vector<pp> G[], int N)
{
	priority_queue<pp, vector<pp>, greater<pp> > pq;
	vector<bool> visited(N, false);
	
	double max = 0;
	
	pq.push({0, 0});
	
	while(!pq.empty())
	{
		pp u = pq.top(); pq.pop();
		if(u.dist > max) max = u.dist;
		if(u.id == 1) return max;
		
		if(visited[u.id]) continue;
		visited[u.id] = true;
		
		for(int j = 0; j < (int)G[u.id].size(); j++)
		{
			pp v = G[u.id][j];
			if(!visited[v.id]) pq.push(v);
		}
	}
	
	return -INF;
}

int n;

void printG(vector<pp> G[])
{
	for(int j = 0; j < n; j++)
	{
		printf("G[%2d]: ", j);
		for(int v = 0; v < (int)G[j].size(); v++)
			printf("(%2d)", G[j][v].id);
		puts("");
	}
}

int main()
{
	int x, y, l;
	
	while(scanf("%d", &n) && n)
	{
		vector<seg> w;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &x, &y, &l);	
			w.push_back(make_seg(x, y, l));
		}
		
		vector<pp> G[n];
	
		for(int u = 0; u < n; u++)
		{
			for(int v = 0; v < n; v++)
			{
				if(u == v) continue;
				dd d = dist_seg2seg(w[u], w[v]);
				G[u].push_back({d, v});
			}
	
		}

		printf("%.2f\n", prim(G, n));
	}
	
	
	return 0;
}



/*

14
1 1 5
6 8 2
7 2 -2
5 3 3
2 5 2
2 3 2
2 3 -2
4 3 -2
0 7 1
1 8 2
3 6 -2
4 7 2
6 6 1
6 6 -2
3
-10 0 20
-5 1 10
50 50 100
0

*/