/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.31.cpp
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
    istream_iterator<int> input(cin), eof;
    ostream_iterator<int> output(cout, " ");
    vector<int> a;
    copy(input, eof, back_inserter(a));
    sort(a.begin(), a.end());
    unique_copy(a.cbegin(), a.cend(), output);
    cout << endl;
    return 0;
}
