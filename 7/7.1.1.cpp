/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�7.1.1.cpp
* ժ    Ҫ����
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 04 �� 28 �� ���ڶ�
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