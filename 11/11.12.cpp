/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.12.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 04 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a = {"1", "3", "a", "b"};
    vector<int> b = {1, 2, 3, 4};
    vector<pair<string, int>> result;
    auto apos = a.begin();
    auto bpos = b.begin();
    for (; apos != a.cend() && bpos != b.cend(); ++apos, ++bpos)
    {
        result.push_back({*apos, *bpos});
    }
    for (const auto & i : result)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}