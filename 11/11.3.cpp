/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.3.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 05 �� ���ڶ�
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    map<string, vector<int>> a = {
        {"123", {1, 2, 3}},
        {"234", {2, 3, 4}},
        {"345", {3, 4, 5}}};
    auto iter = a.find("123");
    pair<string, vector<int>> b(iter->first, iter->second);
    return 0;
}