/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.28.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 21 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
unsigned int t1()
{
    static uniform_int_distribution<unsigned> u(0, 9);
    static default_random_engine e;
    return u(e);
}
unsigned int t1(unsigned int seed)
{
    static uniform_int_distribution<unsigned> u(0, 9);
    static default_random_engine e(seed);
    return u(e);
}
unsigned int t1(unsigned int seed, const unsigned int &_min, const unsigned int &_max)
{
    static uniform_int_distribution<signed> u(_min, _max);
    static default_random_engine e(seed);
    return u(e);
}
int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << t1() << " ";
    }
    cout << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << t1(time(0)) << " ";
    }
    cout << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << t1(time(0), 1, 5) << " ";
    }
    return 0;
}