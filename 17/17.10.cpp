/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.10.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 21 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bitset<32> b;
    array<unsigned int, 6> a = {1, 1, 2, 3, 5, 8};
    for (auto && i:a)
    {
        b.set(i);
    }
    cout << b;
    return 0;
}