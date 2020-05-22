/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.31.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 05 日 星期二
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, string> author = {
        {"a", "b"},
        {"a", "c"},
        {"a", "d"},
        {"g", "i"},
        {"g", "j"}};
    if (author.find("a") == author.end())
    {
        cout << "can't find" << endl;
    }
    else
    {
        for (auto range = author.equal_range("a"); range.first != range.second; ++range.first)
        {
            cout << range.first->first << " " << range.first->second << endl;
        }
    }
    return 0;
}