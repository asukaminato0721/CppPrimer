/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.14.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 02 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int a, b;
    cin >> a >> b;
    auto c = [](const int &a, const int &b) { return a + b; };
    cout << c(a, b);
    return 0;
}