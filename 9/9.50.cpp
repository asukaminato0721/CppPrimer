/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.50.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<string> a = {"12", "-23", "34"};
    int sum = 0;
    for (const auto i : a)
    {
        sum += stoi(i);
    }
    cout << sum<<"\n";
    vector<string> b = {"1.2", "-5.6", "7.8888"};
    double sum_ = 0;
    for (const auto i : b)
    {
        sum_ += stod(i);
    }
    cout << sum_;

    return 0;
}


