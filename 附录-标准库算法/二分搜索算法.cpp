/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ����������㷨.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 22 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1, 1, 1, 1};
    sort(a.begin(), a.end());
    auto iter = lower_bound(a.cbegin(), a.cend(), 3);
    cout << distance(a.cbegin(), iter) << "\n";
    iter = upper_bound(a.cbegin(), a.cend(), 3);
    cout << distance(a.cbegin(), iter) << "\n";
    auto pair_ = equal_range(a.cbegin(), a.cend(), 2);
    cout << distance(a.cbegin(), pair_.first) << "\n";
    cout << binary_search(a.cbegin(), a.cend(), 7);
    return 0;
}