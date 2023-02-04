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

bool check(int x, int n, int l2, int r2)
{
    if ((n - x >= l2) && (n - x <= r2))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int t, n, l1, l2, r1, r2, l3 = 0, r3 = 0;
    t = read();

    while (t--)
    {
        int cnt = 0;
        n = read();
        l1 = read();
        r1 = read();
        l2 = read();
        r2 = read();
        if (r1 < l2 || r2 < l1)
        {
            printf("0\n");
            break;
        }

        int l = l1, r = r1;

        while (l < r)
        {
            int mid = l + r >> 1;
            int x = n - mid;
            if (x >= l2 && x <= r2)
                r = mid;
            else
                l = mid + 1;
        }
        l3 = l;

        l = l1, r = r1;
        while (l < r)
        {
            int mid = l + r + 1 >> 1; //(l+r+1)/2
            int x = n - mid;
            if (x >= l2 && x <= r2)
                l = mid;
            else
                r = mid - 1;
        }
        r3 = l;

        cnt = abs(r3 - l3) + 1;
        cout << l3 << " " << r3 << " ";
        printf("%d\n", cnt);
    }

    return 0;
}
