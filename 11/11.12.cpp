/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.12.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 04 �� ����һ
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a = {"1", "3", "a", "b"};
    vector<int> b = {1, 2, 3, 4};
    vector<pair<string, int>> result;
    auto apos = a.begin();
    auto bpos = b.begin();
    for (; apos != a.cend() && bpos != b.cend(); ++apos, ++bpos)
    {
        result.push_back({*apos, *bpos});
    }
    for (const auto & i : result)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}