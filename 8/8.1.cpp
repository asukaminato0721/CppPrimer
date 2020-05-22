/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：8.1.cpp
* 摘    要：iostream
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 29 日 星期三
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    auto old_state = cin.rdstate();
    cin.clear();
    process_input(cin);
    cin.setstate(old_state);
    cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
    return 0;
}