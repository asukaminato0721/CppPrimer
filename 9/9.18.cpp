/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.18.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string temp;
    deque<string> a;
    while(cin>>temp){
        a.push_back(temp);
    }
    for (auto &&i : a)
    {
        cout << i<<"  ";
    }
return 0;
}