/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：写容器的算法.cpp
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
    vector<int> a = {1, 2, 3};
    fill(a.begin(), a.end(), 1);
    for (auto &&i : a)
    {
        cout << i << "\n";
    }
    return 0;
}