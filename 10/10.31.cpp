/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.31.cpp
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
    istream_iterator<int> input(cin), eof;
    ostream_iterator<int> output(cout, " ");
    vector<int> a;
    copy(input, eof, back_inserter(a));
    sort(a.begin(), a.end());
    unique_copy(a.cbegin(), a.cend(), output);
    cout << endl;
    return 0;
}
