/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�6.2.6.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 04 �� 27 �� ����һ
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int sum(initializer_list<int> List){
    int temp = 0;
    for (auto i : List)
    {
        temp += i;
   }
   return temp;
}
int main()
{
    cout << sum({1, 2, 3, 4, 5, 6});
    return 0;
}