/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.35.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 03 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    ostream_iterator<int> out(cout, " ");
    for (auto i = a.end() - 1; i != a.cbegin() - 1; --i)
    {
        cout << *i << " ";
    }
    return 0;
}