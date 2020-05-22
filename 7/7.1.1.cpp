/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：7.1.1.cpp
* 摘    要：类
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 04 月 28 日 星期二
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Sales_data
{
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

int main()
{
    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
        }
        /* code */
    }

    return 0;
}