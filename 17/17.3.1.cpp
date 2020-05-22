/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.3.1.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 21 日 星期四
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern);
    smatch results;
    string test_str = "receipt freind theif receive";
    if (regex_search(test_str, results, r))
    {
        cout << results.str() << endl;
    }
    return 0;
}