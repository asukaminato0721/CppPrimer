/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.8.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 04 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<string> a;
    string temp;
    while (cin >> temp)
    {
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    auto _end = unique(a.begin(), a.end());
    vector<string> result(a.begin(), _end);
    for (const auto &i : result)
    {
        cout << i << " ";
    }
    return 0;
}
// 用 set 自动去重