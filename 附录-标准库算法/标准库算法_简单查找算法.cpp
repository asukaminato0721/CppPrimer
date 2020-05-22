/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：标准库算法_简单查找算法.cpp
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
    vector<int> a = {1, 2, 3, 4, 1, 2};
    auto iter = find(a.cbegin(), a.cend(), 3); //return a iter
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_if(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); });
    cout << distance(a.cbegin(), iter) << " ";
    iter = find_if_not(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); });
    cout << distance(a.cbegin(), iter) << " ";
    cout << count(a.cbegin(), a.cend(), 1) << " ";
    cout << count_if(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << all_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << all_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << any_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    cout << none_of(a.cbegin(), a.cend(), [](int x) { return (x != 1 ? true : false); }) << " ";
    return 0;
}