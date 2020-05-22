/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.13.cpp
* 摘    要：
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    list<int> a = {1, 2, 3, 4};
    vector<double> b(a.begin(), a.end());
    for (const auto &i : b) //引用，避免拷贝
    {
        cout << i;
    }
    b.assign(a.begin(), a.end());
    for (const auto &i : b) //引用，避免拷贝
    {
        cout << i;
    }
    return 0;
}


