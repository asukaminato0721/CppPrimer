/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�17.11.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 21 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
bitset<10> answer;
void f(const size_t &id, const bool &t_f)
{
    answer.set(id, t_f);
}
int main()
{
    f(4, true);
    f(5, false);
    cout << answer;
    return 0;
}