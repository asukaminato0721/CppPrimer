/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.1.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 19 日 星期二
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int, int, int> a = {10, 20, 30};
    cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a);
    return 0;
}