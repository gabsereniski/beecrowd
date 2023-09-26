#include <bits/stdc++.h>
using namespace std;

int bfs(int f, int s, int g, int u, int d)
{
    unordered_set<int> visited;
    queue<pair<int, int>> q;
    q.push({s, 0});
    visited.insert(s);

    while (!q.empty())
    {
        auto current = q.front();
        q.pop();

        int position = current.first;
        int p_count = current.second;

        if (position == g)
        {
            return p_count;
        }

        int up_position = position + u;
        int down_position = position - d;

        if (up_position <= f && visited.find(up_position) == visited.end())
        {
            q.push({up_position, p_count + 1});
            visited.insert(up_position);
        }

        if (down_position >= 1 && visited.find(down_position) == visited.end())
        {
            q.push({down_position, p_count + 1});
            visited.insert(down_position);
        }
    }

    return -1;
}

int main()
{
    int f, s, g, u, d;

    cin >> f >> s >> g >> u >> d;

    int count = bfs(f, s, g, u, d);

    count == -1 ? cout << "use the stairs\n" : cout << count << endl;

    return 0;
}