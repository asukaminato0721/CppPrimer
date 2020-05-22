/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：16.7.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 18 日 星期一
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
constexpr size_t size(const T &a)
{
    return sizeof(a) / sizeof(*a);
}
int main()
{
    int a[] = {1, 2, 3, 46, 7, 6543, 2, 345, 43, 45, 4, 3};
    cout << size(a);
    return 0;
}