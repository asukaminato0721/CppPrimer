/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：16.1.1.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 11 日 星期一
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2)
        return -1;
    if (v2 < v1)
        return 1;
    return 0;
}
int main()
{
    cout << compare(string("3"),string("23"));
    return 0;
}