/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：11.4.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 04 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
void delete_char(string &a)
{
    while (a.back() == ',' || a.back() == '.')
        a.pop_back();
}
int main()
{
    map<string, size_t> a;
    string word;
    while (cin >> word)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        delete_char(word);
        ++a[word];
    }
    for (const auto &i :a)
    {
        cout << i.first << "  " << i.second << endl;
    }
    return 0;
}