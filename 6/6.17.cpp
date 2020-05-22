/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：6.17.cpp
* 摘    要：6_17
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 26 日 星期天
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void toLower(string &s);
bool isUpper(const string &s);
int main()
{
    string s("AbC");
    toLower(s);
    cout << s;
    return 0;
}

void toLower(string &s)
{
    for (auto &i : s)
    {
        i = tolower(i);
    }
}

bool isUpper(const string &s)
{
    for (auto i : s)
    {
        if (isupper(i))
            return true;
    }
    return false;
}