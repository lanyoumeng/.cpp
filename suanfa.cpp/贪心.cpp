#include <bits/stdc++.h>
using namespace std;

struct coin
{
    int m, v;
} a[110];

bool cmp(coin x, coin y)
{
    return x.v * y.m > y.v * x.m;
}

int main()
{
    int n, t, c, i;
    float ans = 0;
    cin >> n >> t;
    c = t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].m >> a[i].v;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i].m > c)
        {
            break;
        }
        c -= a[i].m;
        ans += a[i].v;
    }
    if (i<n)
    {
        ans += 1.0 * c * a[i].v/a[i].m ;
    }
    printf("%.2lf", ans);
    return 0;
}