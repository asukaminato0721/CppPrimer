/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.35.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 03 日 星期天
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    ostream_iterator<int> out(cout, " ");
    for (auto i = a.end() - 1; i != a.cbegin() - 1; --i)
    {
        cout << *i << " ";
    }
    return 0;
}