#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f;
const int N = 1000010;
int d[N];    //源点s到i的最短路径
bool vis[N]; //是否选过了

void dijk(int s)
{
    memset(d, 0x3f, sizeof(d));
    memset(vis, 0, sizeof(vis));
    d[s] = 0;
    typedef pair<int, int> pii, mii;

    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push(mii(0, s));
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (int i = head[u]; i; i = eg[i].next)
        {
            int v = eg[i].v;
            int l = eg[i].l;
            if (d[v] > d[u] + l)
            {
                d[v] = d[u] + l;
                q.push(mii(d[v], v));
            }
        }
    }
}

int main()
{

    return 0;
}
