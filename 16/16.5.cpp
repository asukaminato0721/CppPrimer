/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�16.5.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 18 �� ����һ
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T1>
void print(const T1 &a)
{
    size_t len = sizeof(a) / sizeof(a[0]);
    for (size_t i = 0; i < len; ++i)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    string b[] = {"1", "3", "5"};
    const string c[] = {"1", "3", "5"};
    print(a);
    print(b);
    print(c);
    return 0;
}