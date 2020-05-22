/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：其他只读算法.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 22 日 星期五
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    auto d = a;
    vector<int> c = {1, 2, 3, 3, 4, 5};
    auto e = c;
    auto b = for_each(a.begin(), a.end(), [](int &x) { x *= 3; });
    cout << b << "\n";
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
    auto pair1 = mismatch(d.cbegin(), d.cend(), c.cbegin());
    cout << *pair1.first << " " << *pair1.second<<"\n";
    cout << equal(c.cbegin(), c.cend(), e.cbegin());
    return 0;
}