/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.20.cpp
* ժ    Ҫ����Ҫ�������ļ�������
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
    deque<int> a, b;
    list<int> c = {1, 2, 3, 4, 5, 6};
    for (auto i = c.begin(); i != c.end(); i++)
    {
        (*i % 2 == 1) ? a.push_back(*i) : b.push_back(*i);
    }
    for (auto &&i : a)
    {
        cout << i;
    }
    for (auto &&i : b)
    {
        cout << i;
    }
    
    
    return 0;
}