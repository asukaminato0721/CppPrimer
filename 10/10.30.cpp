/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.30.cpp
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
    istream_iterator<int> int_in(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> a;
    copy(int_in, eof, back_inserter(a));
    sort(a.begin(), a.end());
    copy(a.cbegin(), a.cend(), out_iter);
    cout << endl;
    return 0;
}