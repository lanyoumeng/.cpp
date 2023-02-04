#include <bits/stdc++.h>
using namespace std;

int ans[10], vis[3][20];
void dfs(int now)
{
    if (now == 9)
    {
        for (int i = 1; i <= 8; i++)
        {
            cout << ans[i] << " ";
        }
        cout<<endl;
    }
    for (int i = 1; i <= 8; i++)
    {
        if (vis[0][i] || vis[1][now + i] || vis[2][now - i + 8])
            continue;
        ans[now] = i;
        vis[0][i] = 1;
        vis[1][now + i] = 1;
        vis[2][now - i + 8] = 1;
        dfs(now + 1);
        vis[0][i] = 0;
        vis[1][now + i] = 0;
        vis[2][now - i + 8] = 0;
    }
}

int main()
{
    dfs(1);

    return 0;
}