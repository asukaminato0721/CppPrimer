/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.13.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 02 日 星期六
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
inline bool islonger(string &a)
{
    return (a.size() >= 5) ? true : false;
}
int main()
{
    vector<string> a = {"1234", "12345678", "1234567890", "098765432", "13"};
    auto pos = partition(a.begin(), a.end(), islonger);
    for (auto i = a.begin(); i != pos; i++)
    {
        cout << *i << " ";
    }
    return 0;
}
