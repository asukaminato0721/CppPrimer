/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�14.44.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 08 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
map<char, function<int(const int &, const int &)>> oper = {
    {'+', plus<int>()},
    {'-', minus<int>()},
    {'*', multiplies<int>()},
    {'/', divides<int>()}};
int main()
{
    string formula;
    cin >> formula;
    auto iter = find_if_not(formula.cbegin(), formula.cend(), ::isdigit);
    auto a = stoi(string(formula.cbegin(), iter));
    auto b = stoi(string(iter + 1, formula.cend()));
    auto op = formula[iter - formula.cbegin()];
    cout << "������� " << op << endl;
    cout << oper[op](a, b);
    return 0;
}