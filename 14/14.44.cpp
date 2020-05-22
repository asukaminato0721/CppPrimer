/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：14.44.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 08 日 星期五
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
map<char, function<int(const int &, const int &)>> oper = {
    {'+', plus<int>()},
    {'-', minus<int>()},
    {'*', multiplies<int>()},
    {'/', divides<int>()}};
int main()
{
    string formula;
    cin >> formula;
    auto iter = find_if_not(formula.cbegin(), formula.cend(), ::isdigit);
    auto a = stoi(string(formula.cbegin(), iter));
    auto b = stoi(string(iter + 1, formula.cend()));
    auto op = formula[iter - formula.cbegin()];
    cout << "运算符： " << op << endl;
    cout << oper[op](a, b);
    return 0;
}