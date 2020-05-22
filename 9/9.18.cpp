/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.18.cpp
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
    string temp;
    deque<string> a;
    while(cin>>temp){
        a.push_back(temp);
    }
    for (auto &&i : a)
    {
        cout << i<<"  ";
    }
return 0;
}