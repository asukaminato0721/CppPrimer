/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.1.cpp
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
    vector<int> a;
    int b;
    while (cin >> b)
        a.push_back(b);
    cout << count(a.cbegin(), a.cend(), 3);
    return 0;
}

