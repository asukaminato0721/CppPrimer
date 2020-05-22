/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：查找重复值算法.cpp
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
    vector<int> a = {1, 2, 3, 4, 5, 4, 3, 2, 1, 1};
    auto iter = adjacent_find(a.cbegin(), a.cend());
    cout << distance(a.cbegin(), iter) << " ";
    iter = search_n(a.cbegin(), a.cend(), 1, 3);
    cout << distance(a.cbegin(),iter) << " ";
    return 0;
}