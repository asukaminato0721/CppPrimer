/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.30.cpp
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
    istream_iterator<int> int_in(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> a;
    copy(int_in, eof, back_inserter(a));
    sort(a.begin(), a.end());
    copy(a.cbegin(), a.cend(), out_iter);
    cout << endl;
    return 0;
}