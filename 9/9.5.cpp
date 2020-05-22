/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.1.cpp
* 摘    要：顺序容器
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int>::iterator find_(vector<int>::iterator a, vector<int>::iterator b, const int &c)
{
    for (auto i = a; i != b; i++)
    {
        if (*i == c)
        {
            return i;
        }
    }
    return b;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    cout << *find_(a.begin(), a.end(), 3);
    return 0;
}


