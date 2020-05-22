/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：二分搜索算法.cpp
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
    vector<int> a = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1, 1, 1, 1};
    sort(a.begin(), a.end());
    auto iter = lower_bound(a.cbegin(), a.cend(), 3);
    cout << distance(a.cbegin(), iter) << "\n";
    iter = upper_bound(a.cbegin(), a.cend(), 3);
    cout << distance(a.cbegin(), iter) << "\n";
    auto pair_ = equal_range(a.cbegin(), a.cend(), 2);
    cout << distance(a.cbegin(), pair_.first) << "\n";
    cout << binary_search(a.cbegin(), a.cend(), 7);
    return 0;
}