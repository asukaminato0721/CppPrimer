/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�14.43.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 08 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
modulus<int> Mod;
const int given = 2;
bool is(const int &x)
{
    return Mod(x, 2) == 0;
}
int main()
{
    vector<int> a = {2, 2, 2, 24, 52, 62, 72};
    vector<int> b = {2, 2, 3, 24, 52, 1, 72};
    cout << (all_of(a.cbegin(), a.cend(), is) ? "Y" : "N") << "\n";
    cout << (all_of(a.cbegin(), a.cend(), [](const int &x) { return x % 2 == 0; }) ? "Y" : "N") << "\n";
    cout << (all_of(b.cbegin(), b.cend(), is) ? "Y" : "N") << "\n";
    return 0;
}