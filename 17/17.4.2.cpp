/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.4.2.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 21 日 星期四
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