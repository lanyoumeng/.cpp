#include <bits/stdc++.h>

const int Max = 1000010;
using namespace std;

int count[Max]; //������ʾ���
int count;      //������¼
void tuopu()
{
    vector<int> q;               //������Ϊ��Ķ���
    for (int i = 1; i <= n; i++) // n�������
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
        cout << "û��������ж���,����ͼ���л�·";
    else

        cout << "";
}

int main()
{
}