/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�11.4.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 04 �� ����һ
*/
#include <bits/stdc++.h>
using namespace std;
void delete_char(string &a)
{
    while (a.back() == ',' || a.back() == '.')
        a.pop_back();
}
int main()
{
    map<string, size_t> a;
    string word;
    while (cin >> word)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        delete_char(word);
        ++a[word];
    }
    for (const auto &i :a)
    {
        cout << i.first << "  " << i.second << endl;
    }
    return 0;
}