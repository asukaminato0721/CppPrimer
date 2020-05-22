/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ���ֵ�㷨.cpp
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
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 5, 6};
    vector<int> dest;
    vector<int> difference;
    vector<int> range(5, 0);
    cout << accumulate(a.cbegin(), a.cend(), 0) << "\n";
    cout << inner_product(a.cbegin(), a.cend(), b.cbegin(), 0) << "\n";
    partial_sum(a.cbegin(), a.cend(), back_inserter(dest));
    print(dest);
    adjacent_difference(a.cbegin(), a.cend(), back_inserter(difference));
    print(difference);
    iota(range.begin(), range.end(), 0);
    print(range);
    cout << endl;
    return 0;
}