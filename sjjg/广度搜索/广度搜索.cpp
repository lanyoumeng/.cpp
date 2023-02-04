#include <bits/stdc++.h>
using namespace std;

int g[25][25];
bool vis[25][25];

struct st
{
    int x, y;
    int dis;
};

int dirx[4] = {0, 0, 1, -1};
int diry[4] = {1, -1, 0, 0};

int bfs(int sx, int sy, int ex, int ey)
{
    queue<st> q;
    st temp;
    temp.x = sx;
    temp.y = sy;
    temp.dis = 0;
    q.push(temp);
    vis[sx][sy] = true;

    while (!q.empty())
    {
        st res = q.front();
        q.pop();
        if (res.x == ex && res.y == ey)
            return res.dis;
        for (int i = 0; i < 4; i++)
        {
            int xx = res.x + dirx[i], yy = res.y + diry[i], dist = res.dis + 1;
            if (!vis[xx][yy] && g[xx][yy] == 1)
            {
                st tmp;
                tmp.x = xx;
                tmp.y = yy;
                tmp.dis = dist;
                q.push(tmp);
                vis[xx][yy] = true;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> g[i][j];
        }
    }
    int ans = bfs(sx, sy, ex, ey);
    cout << ans;

    return 0;
}
