/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：6.2.6.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 27 日 星期一
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int sum(initializer_list<int> List){
    int temp = 0;
    for (auto i : List)
    {
        temp += i;
   }
   return temp;
}
int main()
{
    cout << sum({1, 2, 3, 4, 5, 6});
    return 0;
}