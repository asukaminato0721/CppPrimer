/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.50.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<string> a = {"12", "-23", "34"};
    int sum = 0;
    for (const auto i : a)
    {
        sum += stoi(i);
    }
    cout << sum<<"\n";
    vector<string> b = {"1.2", "-5.6", "7.8888"};
    double sum_ = 0;
    for (const auto i : b)
    {
        sum_ += stod(i);
    }
    cout << sum_;

    return 0;
}


