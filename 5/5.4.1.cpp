/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：5.4.1.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 21 日 星期二
*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    vector<string> word;
    string temp;
    while (cin >> temp)
    {
        word.push_back(temp);
    }
    temp = word[0];
    vector<string>::size_type max_ = 1, global_max = 0;
    if (word.size() == 1)
    {
        cout << "none";
    }
    else
    {
        for (auto i = word.begin() + 1; i != word.end(); ++i)
        {
            if (*i == temp)
            {
                ++max_;
                if (global_max < max_)
                {
                    global_max = max_;
                }
            }
            else
            {
                if (global_max < max_)
                {
                    global_max = max_;
                }
                max_ = 1;
            }
            temp = *i;
        }
    }
    // 判断是否有连续的
    if (global_max > 1)
    {
        cout << global_max;
    }
    else
    {
        cout << "none";
    }
}
