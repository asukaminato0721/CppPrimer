/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ���Сֵ�����ֵ.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 22 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
vector<int> a = {3, 1, 2, 3, 4, 5, 3};
vector<int> b = {3, 5, 8, 6, 43};
int main()
{
    cout << min(3, 5) << "\n";
    cout << max(5, 8) << "\n";
    cout << min({1, 2, 3}) << "\n";
    cout << max({1, 2, 3}) << "\n";
    auto min_ = min_element(a.cbegin(), a.cend());
    cout << *min_ << "\n";
    auto max_ = max_element(a.cbegin(), a.cend());
    cout << *(max_) << "\n";
    auto pair1 = minmax_element(a.cbegin(), a.cend());
    cout << *pair1.first << " " << *pair1.second << "\n";
    cout << lexicographical_compare(a.cbegin(), a.cend(), b.cbegin(), b.cend());
    return 0;
}