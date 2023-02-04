#include <bits/stdc++.h>
using namespace std;
inline int read()
{
    char c = getchar();
    int x = 0, s = 1;
    while (c < '0' || c > '9')
    {
        if (c == '-')
            s = -1;
        c = getchar();
    } // ÊÇ·ûºÅ
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar();
    } // ÊÇÊı×Ö
    return x * s;
}

int main()
{
    int t;
    t = read();
    while (t--)
    {
        int n, cnt1 = 0, cnt2 = 0, sum;
        string s;
        n = read();

        for (int i = 1; i <= n * n - 1; i++)
        {
            cin >> s;
            for (int i = 0; i < 4; i++)
            {
                if (s[i] == '1')
                    cnt1++;
                else if (s[i] == '2')
                    cnt2++;
            }
        }
        if (cnt1 > cnt2)
        {
            sum = 10 + (cnt1 - cnt2);
        }
        else if (cnt1 < cnt2)
        {
            sum = 10 - (cnt2 - cnt1);
        }
        else if (cnt1 == cnt2)
        {
            sum = 10;
        }
        cout << sum;
    }

    return 0;
}
