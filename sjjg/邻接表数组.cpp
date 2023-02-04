#include <bits/stdc++.h>
using namespace std;
int coun;
const int N = 1e5;
typedef struct
{
    int u, v, next;
} Edge;

Edge eg[N];

int head[N];

void add_edge(int a, int b)
{
    coun++;
    eg[coun].u = a;
    eg[coun].v = b;
    eg[coun].next = head[a];
    head[a] = coun;
}

int main()
{
    add_edge(1, 2);
    add_edge(1, 3);
    add_edge(3, 2);
    add_edge(2, 4);
    for (int i = head[1]; i != 0; i = eg[i].next)
    {
        //
    }

    return 0;
}
