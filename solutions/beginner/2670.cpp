#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int A = 2 * b + 4 * c;
    int B = 2 * a + 2 * c;
    int C = 4 * a + 2 * b;

    cout << min(A, min(B, C)) << endl;
}
