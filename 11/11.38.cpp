/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.38.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 05 �� ���ڶ�
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> word = {
        "a", "b", "c", "d", "e", "a"};
    unordered_map<string, size_t> a;
    for (const auto &i : word)
    {
        a[i]++;
    }
    for (const auto &i : a)
    {
        cout << i.first << " " << i.second << " times" << endl;
    }
    return 0;
}