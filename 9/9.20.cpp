/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.20.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    deque<int> a, b;
    list<int> c = {1, 2, 3, 4, 5, 6};
    for (auto i = c.begin(); i != c.end(); i++)
    {
        (*i % 2 == 1) ? a.push_back(*i) : b.push_back(*i);
    }
    for (auto &&i : a)
    {
        cout << i;
    }
    for (auto &&i : b)
    {
        cout << i;
    }
    
    
    return 0;
}