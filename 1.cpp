#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    if (x == 3)
    {
        return true;
    }
    return false;
}

int a, b;
int main()
{
    int l = 1, r = 3;
    while (l < r)
    {
        int mid = l + r + 1 >> 1; //(l+r+1)/2
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}
