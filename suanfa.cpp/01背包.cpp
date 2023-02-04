#include <bits/stdc++.h>
using namespace std;

int N, V;
int f[10001][10001];
int v[10001], w[10001];

int main()
{
    cin >> N >> V;
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i] >> w[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= V; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= v[i])
            {
                f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i]] + w[i]);
            }
        }
    }
    cout << f[N][V];

    return 0;
}

//完全背包

// #include <bits/stdc++.h>
// using namespace std;

// int N, V;
// int f[10001][10001];
// int v[10001], w[10001];

// int main()
// {
//     cin >> N >> V;
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> v[i] >> w[i];
//     }

//     for (int i = 1; i <=N; i++)
//     {
//         for (int j = 0; j <= V; j++)
//         {
//             f[i][j]=f[i-1][j];
//             if (j >= v[i])
//             {

//                 f[i][j] = max(f[i-1][j], f[i][j - v[i]] + w[i]);   //只是把i-1改为i
//             }
//         }
//     }
//     cout<<f[N][V];

//     return 0;
// }
