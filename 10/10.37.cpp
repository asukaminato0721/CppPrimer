/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�10.37.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 03 �� ������
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    copy(a.crbegin() + 2, a.crend() - 2, ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}

