/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.4.2.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 21 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    normal_distribution<> n(4, 1.5);
    default_random_engine e;
    vector<unsigned> vals(9);
    for (size_t i = 0; i != 200; i++)
    {
        unsigned v = lround(n(e));
        if (v < vals.size())
        {
            ++vals[v];
        }
    }
    for (size_t j = 0; j != vals.size(); j++)
    {
        cout << j << " :" << string(vals[j], '*') << endl;
    }
    return 0;
}