/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�д�������㷨.cpp
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
    vector<int> a = {1, 2, 3};
    fill(a.begin(), a.end(), 1);
    for (auto &&i : a)
    {
        cout << i << "\n";
    }
    return 0;
}