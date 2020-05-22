/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：6.35.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 27 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int fact(const int &n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int fact_1(int n){
    if (n ==1)
    {
        return 1;
    }
    else
    {
        return n * fact(--n);//如果这么写，就变成 (n-1)*f(n-1)了
    }
}
int main()
{
    cout << fact_1(5);
    return 0;
}


