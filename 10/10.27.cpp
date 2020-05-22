/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.27.cpp
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
    vector<int> a = {1, 2, 3, 3, 4, 5, 11, 6, 6, 7, 8};
    sort(a.begin(), a.end());
    list<int> b;
    unique_copy(a.begin(), a.end(), back_inserter(b));
    //https://www.cnblogs.com/heyonggang/p/3243477.html
    for (const auto &i : b)
    {
        cout << i<<" ";
    }
    istream_iterator<int> in(cin),eof;
    cout << accumulate(in, eof, 0) << endl;
    return 0;
}