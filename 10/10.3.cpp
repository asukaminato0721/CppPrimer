/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.3.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 02 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 7, 8, 8};
    cout << accumulate(a.cbegin(), a.cend(), 0);
    return 0;
}