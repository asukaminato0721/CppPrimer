/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�9.38.cpp
* ժ    Ҫ��find vector
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 01 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for (int i = 0; i < 40;i++){
        cout << a.capacity() << " " << a.size()<<"\n";
        a.push_back(i);
    }
        return 0;
}