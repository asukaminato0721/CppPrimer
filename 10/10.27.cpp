/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.27.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 03 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    vector<int> a = {1, 2, 3, 3, 4, 5, 11, 6, 6, 7, 8};
    sort(a.begin(), a.end());
    list<int> b;
    unique_copy(a.begin(), a.end(), back_inserter(b));
    //https://www.cnblogs.com/heyonggang/p/3243477.html
    for (const auto &i : b)
    {
        cout << i<<" ";
    }
    istream_iterator<int> in(cin),eof;
    cout << accumulate(in, eof, 0) << endl;
    return 0;
}