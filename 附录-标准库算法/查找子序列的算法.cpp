/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：查找子序列的算法.cpp
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
    vector<int> a = {8, 1, 2, 3, 4, 5, 6, 7, 6};
    vector<int> b = {2, 3, 4, 5};
    vector<int> c = {8, 3, 2, 5};
    vector<int> d = {6};
    auto iter = search(a.cbegin(), a.cend(), b.cbegin(), b.cend());
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_first_of(a.cbegin(), a.cend(), c.cbegin(), c.cend());
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_end(a.cbegin(), a.cend(), c.cbegin(), c.cend());
    cout << distance(a.cbegin(), iter);
    return 0;
}