/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�12.26.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 06 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int n = 5;
    allocator<string> alloc;
    auto const p = alloc.allocate(n); //p ָ��ͷ��
    string s;
    auto q = p;
    while (cin >> s && q != p + n)
    {
        alloc.construct(q++, s); //q ��Ϊ������ָ��������β��
    }
    for (auto i = p; i != q; ++i)
    {
        cout << *i << " ";
    }
    // ����Ԫ��
    while (q != p)
    {
        alloc.destroy(--q);
    }
    //�ͷ�
    alloc.deallocate(p, n);
    return 0;
}
