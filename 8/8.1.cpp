/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�8.1.cpp
* ժ    Ҫ��iostream
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 04 �� 29 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    auto old_state = cin.rdstate();
    cin.clear();
    process_input(cin);
    cin.setstate(old_state);
    cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
    return 0;
}