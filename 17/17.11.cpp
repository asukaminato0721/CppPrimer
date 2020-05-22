/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.11.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 21 日 星期四
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
bitset<10> answer;
void f(const size_t &id, const bool &t_f)
{
    answer.set(id, t_f);
}
int main()
{
    f(4, true);
    f(5, false);
    cout << answer;
    return 0;
}