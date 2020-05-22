/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.3.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 05 日 星期二
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    map<string, vector<int>> a = {
        {"123", {1, 2, 3}},
        {"234", {2, 3, 4}},
        {"345", {3, 4, 5}}};
    auto iter = a.find("123");
    pair<string, vector<int>> b(iter->first, iter->second);
    return 0;
}