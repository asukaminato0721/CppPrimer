/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ���׼���㷨_�򵥲����㷨.cpp
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
    vector<int> a = {1, 2, 3, 4, 1, 2};
    auto iter = find(a.cbegin(), a.cend(), 3); //return a iter
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_if(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); });
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_if_not(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); });
    cout << distance(a.cbegin(), iter) << " ";
    cout << count(a.cbegin(), a.cend(), 1) << " ";
    cout << count_if(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << all_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << all_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << any_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << none_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    return 0;
}