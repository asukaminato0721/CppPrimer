/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.38.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 05 日 星期二
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> word = {
        "a", "b", "c", "d", "e", "a"};
    unordered_map<string, size_t> a;
    for (const auto &i : word)
    {
        a[i]++;
    }
    for (const auto &i : a)
    {
        cout << i.first << " " << i.second << " times" << endl;
    }
    return 0;
}