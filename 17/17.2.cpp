/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.2.cpp
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
    tuple<string, vector<string>, pair<string, int>> a = {"test", {"test", "test1"}, {"a", 1}};
    cout << get<0>(a) << endl;
    cout << *(get<1>(a).cend()) << endl;
    cout << get<2>(a).first << endl;
    return 0;
}