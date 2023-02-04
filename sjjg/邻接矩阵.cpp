#include <bits/stdc++.h>
using namespace std;

const int Max = 10000;

long long s[Max][Max];

void add_edge(int a, int b)
{
    s[a][b] = 1;
}

bool cz(int a, int b)
{
    return s[a][b];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (s[1][i])
        {
            
        }
    }

    return 0;
}
