/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.2.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 19 �� ���ڶ�
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<string, vector<string>, pair<string, int>> a = {"test", {"test", "test1"}, {"a", 1}};
    cout << get<0>(a) << endl;
    cout << *(get<1>(a).cend()) << endl;
    cout << get<2>(a).first << endl;
    return 0;
}