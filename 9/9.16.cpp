/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.16.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool Equal(vector<int> a, list<int> b)
{
    vector<int> temp(b.begin(), b.end());
    if (a.size() != b.size())
    {
        return false;
    }
    for (auto i = a.begin(),j = temp.begin(); i != a.end(); i++, j++)
    {
        if(*i!=*j)
            return false;
    }
    return true;
}
int main()
{
    vector<int> a = {1, 2, 3};
    list<int> b = {1, 2, 3};
    Equal(a, b) ? (cout << 1) : (cout << 2);
    return 0;
}