/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�6.4.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 04 �� 27 �� ����һ
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}
string &shorterString(string &s1, string &s2)
{
    auto &r = shorterString(
        const_cast<const string &>(s1),
        const_cast<const string &>(s2));
    return const_cast<string &>(r);
}
int main()
{
    return 0;
}