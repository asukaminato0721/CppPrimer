/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.1.cpp
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
    tuple<int, int, int> a = {10, 20, 30};
    cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a);
    return 0;
}