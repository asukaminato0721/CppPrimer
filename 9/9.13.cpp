/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.13.cpp
* ժ    Ҫ��
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    list<int> a = {1, 2, 3, 4};
    vector<double> b(a.begin(), a.end());
    for (const auto &i : b) //���ã����⿽��
    {
        cout << i;
    }
    b.assign(a.begin(), a.end());
    for (const auto &i : b) //���ã����⿽��
    {
        cout << i;
    }
    return 0;
}


