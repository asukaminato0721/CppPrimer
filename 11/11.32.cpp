/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.31.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 05 �� ���ڶ�
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, string> author = {
        {"a", "b"},
        {"a", "c"},
        {"a", "d"},
        {"g", "i"},
        {"g", "j"}};
    if (author.find("a") == author.end())
    {
        cout << "can't find" << endl;
    }
    else
    {
        for (auto range = author.equal_range("a"); range.first != range.second; ++range.first)
        {
            cout << range.first->first << " " << range.first->second << endl;
        }
    }
    return 0;
}