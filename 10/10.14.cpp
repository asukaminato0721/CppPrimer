/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.14.cpp
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
    int a, b;
    cin >> a >> b;
    auto c = [](const int &a, const int &b) { return a + b; };
    cout << c(a, b);
    return 0;
}