/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ��������еļ����㷨.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 22 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const T &a)
{
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 4, 5};
    vector<int> dest[5];
    cout << includes(a.cbegin(), a.cend(), b.cbegin(), b.cend() - 1) << "\n";
    set_union(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[0]));
    print(dest[0]);
    set_intersection(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[1]));
    print(dest[1]);
    set_difference(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[2]));
    print(dest[2]);
    set_symmetric_difference(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[3]));
    print(dest[3]);
    return 0;
}