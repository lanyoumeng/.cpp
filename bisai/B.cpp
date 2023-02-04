
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L = 0, R = n + 1, pos = 0; // 注意用pos来储存目标值所在数组元素的下标值，同时可以判断是否找到了目标						  //值
    int x = t;
    while ((R - L) > 1) // 确保最终L和R所指的元素之间的所有元素都已经被检验到
    {
        int mid = (L + R) / 2;
        if (a[mid] == x)
        {
            pos = mid;
            return;
        }
        if (a[mid] < x)
            L = mid;
        else
            R = mid;
    }

    return 0;
}
