#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int p = 0;

    bool isprime[100001];
    long long prime[100001];

    memset(isprime, true, sizeof(isprime));
    isprime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            prime[++p] = i;
            // cout << prime[p];
        }

        for (int j = 1; j <= n && i * prime[j] < n; j++)
        {
            isprime[i * prime[j]] = false;
            if (i % prime[j] == 0)
            {
                break;
            }
        }
    }
    // cout << endl;

    // for (int i = 1; i <= p; i++)
    // {
    //     cout << prime[i] << " ";
    // }
    // cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (isprime[i] != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
