/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.8.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 04 �� ����һ
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<string> a;
    string temp;
    while (cin >> temp)
    {
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    auto _end = unique(a.begin(), a.end());
    vector<string> result(a.begin(), _end);
    for (const auto &i : result)
    {
        cout << i << " ";
    }
    return 0;
}
// �� set �Զ�ȥ��