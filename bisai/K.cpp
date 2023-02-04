#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int f = ceil(n / 3.0);
    int q = n / 3;
    if (m <= f)
    {
        cout << 0;
    }
    else if (m <= f + q)
    {
        cout << (m - f) * 2;
    }
    else
    {
        cout << q * 2 + (m - f - q);
    }
    return 0;
}
