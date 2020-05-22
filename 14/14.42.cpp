/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：14.8.2.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 08 日 星期五
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
greater<int> dayu;
bool is(int x)
{
    return dayu(x, 1024);
};
bool equal(string a){
    return a == string("pooh");
}
int main()
{
    vector<int> a = {1000, 2000, 3000};
    vector<string> b = {"pooh", "pooh", "pooh", "123","1234", "pooh", "pooh"};
    cout << count_if(a.cbegin(), a.cend(), is) << endl;
    auto iter = find_if_not(b.cbegin(), b.cend(), ::equal);
    cout << *(iter) << endl;
    for_each(a.begin(), a.end(), [](int x) { return 2 * x; });
    for (auto &&i : a)
    {
        cout << i<<" ";
    }
}

