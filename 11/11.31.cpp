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
using ll = long long;
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
        author.erase(author.find("a"));
        cout << author.size();
    }
    return 0;
}