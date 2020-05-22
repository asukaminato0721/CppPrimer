/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.16.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool Equal(vector<int> a, list<int> b)
{
    vector<int> temp(b.begin(), b.end());
    if (a.size() != b.size())
    {
        return false;
    }
    for (auto i = a.begin(),j = temp.begin(); i != a.end(); i++, j++)
    {
        if(*i!=*j)
            return false;
    }
    return true;
}
int main()
{
    vector<int> a = {1, 2, 3};
    list<int> b = {1, 2, 3};
    Equal(a, b) ? (cout << 1) : (cout << 2);
    return 0;
}