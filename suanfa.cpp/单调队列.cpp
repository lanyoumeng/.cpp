#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], shu[n], wei[n], l = 0, r = -1, result[n], flag = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < k; i++)
    {
        while (l <= r && shu[r] > a[i])
            r--;

        r++;
        shu[r] = a[i];
        wei[r] = i;
    }

    result[flag++] = shu[l];
    for (int i = k; i < n; i++)
    {
        while (l <= r && wei[l] < i - k + 1)
            l++;
        while (l <= r && shu[r] > a[i])
            r--;

        r++;
        shu[r] = a[i];
        wei[r] = i;

        result[flag++] = shu[l];
    }

    for (int i = 0; i < flag; i++)
        cout << result[i] << " ";
    cout << endl;
    l = 0, r = -1, flag = 0;

    for (int i = 0; i < k; i++)
    {
        while (l <= r && shu[r] <= a[i])
            r--;

        r++;
        shu[r] = a[i];
        wei[r] = i;
    }

    result[flag++] = shu[l];
    for (int i = k; i < n; i++)
    {
        while (l <= r && wei[l] < i - k + 1)
            l++;
        while (l <= r && shu[r] <= a[i])
            r--;

        r++;
        shu[r] = a[i];
        wei[r] = i;

        result[flag++] = shu[l];
    }

    for (int i = 0; i < flag; i++)
        cout << result[i] << " ";
    return 0;
}
