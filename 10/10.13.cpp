/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.13.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 02 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
inline bool islonger(string &a)
{
    return (a.size() >= 5) ? true : false;
}
int main()
{
    vector<string> a = {"1234", "12345678", "1234567890", "098765432", "13"};
    auto pos = partition(a.begin(), a.end(), islonger);
    for (auto i = a.begin(); i != pos; i++)
    {
        cout << *i << " ";
    }
    return 0;
}
