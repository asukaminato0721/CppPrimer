/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.15.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool Equal(vector<int> a, vector<int> b)
{
    if (a.size() != b.size())
        return false;
    for (auto i = a.begin(), j = b.begin(); i != a.end() && j != b.end(); i++, j++)
    {
        if (*i != *j)
            return false;
    }
    return true;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    vector<int> c = {1, 2, 3, 4, 5, 6};
    Equal(a, b) ? (cout << 1) : (cout << 2);
    cout << "\n";
    Equal(a, c) ? (cout << 1) : (cout << 2);
    return 0;
}