/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.2.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 02 日 星期六
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<string> a;
    string b;
    while (cin >> b)
        a.push_back(b);
    cout << count(a.cbegin(), a.cend(), "3");
    return 0;
}