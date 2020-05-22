/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.28.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 21 日 星期四
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