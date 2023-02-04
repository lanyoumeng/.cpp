#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, l1, l2, r1, r2, l3, r3;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        cin >> n;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 >= l2)
        {
            l3 = l1;
        }
        else
        {
            l3 = l1;
        }
        if (r1 <= r2)
        {
            r3 = r1;
        }
        else
        {
            r3 = r2;
        }

        cnt = (r3 - l3) + 1;
        cout << ++cnt << endl;
    }

    return 0;
}
