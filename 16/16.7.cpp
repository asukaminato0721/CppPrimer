/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�16.7.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 18 �� ����һ
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
constexpr size_t size(const T &a)
{
    return sizeof(a) / sizeof(*a);
}
int main()
{
    int a[] = {1, 2, 3, 46, 7, 6543, 2, 345, 43, 45, 4, 3};
    cout << size(a);
    return 0;
}