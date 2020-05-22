/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：9.38.cpp
* 摘    要：find vector
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 01 日 星期五
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for (int i = 0; i < 40;i++){
        cout << a.capacity() << " " << a.size()<<"\n";
        a.push_back(i);
    }
        return 0;
}