/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：16.19.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 18 日 星期一
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const T &a)
{
    // typename T::size_type st;
    auto iter = a.begin();
    // size_t len = a.size() / st;
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << *iter << " ";
        iter++;
    }
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 4};
    print(a);
  //  cout << a.size();
    return 0;
}