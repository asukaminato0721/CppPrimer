/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：16.5.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 18 日 星期一
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T1>
void print(const T1 &a)
{
    size_t len = sizeof(a) / sizeof(a[0]);
    for (size_t i = 0; i < len; ++i)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    string b[] = {"1", "3", "5"};
    const string c[] = {"1", "3", "5"};
    print(a);
    print(b);
    print(c);
    return 0;
}