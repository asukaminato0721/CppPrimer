/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：有序序列的集合算法.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 22 日 星期五
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const T &a)
{
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 4, 5};
    vector<int> dest[5];
    cout << includes(a.cbegin(), a.cend(), b.cbegin(), b.cend() - 1) << "\n";
    set_union(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[0]));
    print(dest[0]);
    set_intersection(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[1]));
    print(dest[1]);
    set_difference(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[2]));
    print(dest[2]);
    set_symmetric_difference(a.cbegin(), a.cend(), b.cbegin(), b.cend(), back_inserter(dest[3]));
    print(dest[3]);
    return 0;
}