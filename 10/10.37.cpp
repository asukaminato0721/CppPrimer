/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：10.37.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 03 日 星期天
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    copy(a.crbegin() + 2, a.crend() - 2, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}

