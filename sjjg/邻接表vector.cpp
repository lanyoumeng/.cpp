#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
typedef struct
{
    int a, b;
} Edge;

vector<Edge> eg[N];

void add_edge(int a, int b)
{
    eg[a].push_back({a, b});
}

bool querr(int a, int b)
{
    for (auto i : eg[a])
    {
        if (i.b == b)
            return 1;
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    for (auto i : eg[1])
    {
        }

    return 0;
}