#include <bits/stdc++.h>
using namespace std;
/*ȫ���к���
next_permutation(first,�0�2last)
����������[first,last)Ԫ��ȫ������һ���������һ������
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