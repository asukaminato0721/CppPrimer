/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：17.10.cpp
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
    bitset<32> b;
    array<unsigned int, 6> a = {1, 1, 2, 3, 5, 8};
    for (auto && i:a)
    {
        b.set(i);
    }
    cout << b;
    return 0;
}