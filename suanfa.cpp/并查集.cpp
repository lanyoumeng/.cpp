#include <bits/stdc++.h>
using namespace std;
#define max 1000010

// 除了查找亲戚，还可以看成合并（双向连接）两个节点

int fa[max], n, m, q, a1, a2;

int find(int a)
{

    return fa[a] ? fa[a] = find(fa[a]) : a;
}

int main()
{
    cin >> n >> m >> q;

    for (int i = 0; i < m; i++)
    {
        cin >> a1 >> a2;
        a1 = find(a1);
        a2 = find(a2);
        if (a1 != a2)
        {
            fa[a1] = a2;
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin >> a1 >> a2;
        a1 = find(a1);
        a2 = find(a2);
        if (a1 != a2)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}
