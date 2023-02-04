#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

const int Max = 1000010;
int dis[Max];
bool inq[Max];

void spfa(int s)
{
       for (int i = 1; i <= n; i++)
              dis[i] = INF, inq = false;

       dis[s] = 0;
       queue<int> q;
       q.push(s);
       inq[s] = true;

       while (!q.empty())
       {
              int u = q.front();
              q.pop();
              inq[u] = false;
              for (int i = head[u]; i; i = eg[i].next)
              {
                     int v = eg[i].v;
                     if (dis[u] + egg[i].l < dis[v])
                     {
                            dis[v] = dis[u] + eg[i].l;
                            if (!inq[v])
                            {
                                   q.push(v);
                                   inq[v] = true;
                            }
                     }
              }
       }
}
int main()
{

       return 0;
}
