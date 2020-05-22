/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：6.4.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 27 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}
string &shorterString(string &s1, string &s2)
{
    auto &r = shorterString(
        const_cast<const string &>(s1),
        const_cast<const string &>(s2));
    return const_cast<string &>(r);
}
int main()
{
    return 0;
}