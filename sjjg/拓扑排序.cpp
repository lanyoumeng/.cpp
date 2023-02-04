#include <bits/stdc++.h>

const int Max = 1000010;
using namespace std;

int count[Max]; //用来表示入度
int count;      //用来记录
void tuopu()
{
    vector<int> q;               //存放入度为零的顶点
    for (int i = 1; i <= n; i++) // n顶点个数
    {
        if (!count[i])
            q.push_back(i);
    }

    while (!q.empty())
    {
        int u = q.front();
        cout << u;
        q.pop();
        for (auto v : eg[u])
        {
            --count[v];
            ++count;
            if (!count[v])
                q.push(v);
        }
    }

    if (count < n)
        cout << "没有输出所有顶点,有向图中有回路";
    else

        cout << "";
}

int main()
{
}