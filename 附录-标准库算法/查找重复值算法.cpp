/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ������ظ�ֵ�㷨.cpp
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
    vector<int> a = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1};
    auto iter = adjacent_find(a.cbegin(), a.cend());
    cout << distance(a.cbegin(), iter) << " ";
    iter = search_n(a.cbegin(), a.cend(), 1, 3);
    cout << distance(a.cbegin(),iter) << " ";
    return 0;
}