/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.1.cpp
* ժ    Ҫ��˳������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool find_(vector<int>::iterator a, vector<int>::iterator b,const int &c){
    for (auto i = a; i != b;i++)
    {
        if (*i==c)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    find_(a.begin(), a.end(), 3) ? (cout << 1) : (cout << 2);
    return 0;
}


