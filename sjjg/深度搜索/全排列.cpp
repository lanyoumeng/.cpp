#include <bits/stdc++.h>
using namespace std;
/*全排列函数
next_permutation(first, last)
用于求序列[first,last)元素全排列中一个排序的下一个排序
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3] = {1, 2, 3};
    do
    {
        for (int i = 0; i < 3; i++)
            cout << a[i] << ' ';
        cout << endl;

    } while (next_permutation(a, a + 3));
    return 0;
}

*/
int a[100010], vis[100010];

void dfs(int now, int n)
{
    if (now == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";

        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        vis[i] = 1;
        a[now] = i;
        dfs(now + 1, n);
        vis[i] = 0;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    dfs(1, n);

    return 0;
}