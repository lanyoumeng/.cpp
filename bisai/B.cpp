
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L = 0, R = n + 1, pos = 0; // ע����pos������Ŀ��ֵ��������Ԫ�ص��±�ֵ��ͬʱ�����ж��Ƿ��ҵ���Ŀ��						  //ֵ
    int x = t;
    while ((R - L) > 1) // ȷ������L��R��ָ��Ԫ��֮�������Ԫ�ض��Ѿ������鵽
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
