/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�16.4.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 18 �� ����һ
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2>
//T1 : iter T2 : aim
T1 find(const T1 &iter1, const T1 &iter2, const T2 &aim)
{
    for (auto i = iter1; i != iter2; ++i)
    {
        if (*i == aim)
        {
            return i;
        }
    }
    return iter2;
}
int main()
{
    vector<int> a = {1, 3, 2, 3, 4, 4};
    list<string> b = {"1", "2", "3"};
    auto iter = ::find(a.begin(), a.end(), 3);
    cout << *iter << endl;
    auto iter1 = ::find(b.begin(), b.end(), "2");
    cout << *iter1;
    return 0;
}