/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�14.8.2.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 05 �� 08 �� ������
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
greater<int> dayu;
bool is(int x)
{
    return dayu(x, 1024);
};
bool equal(string a){
    return a == string("pooh");
}
int main()
{
    vector<int> a = {1000, 2000, 3000};
    vector<string> b = {"pooh", "pooh", "pooh", "123","1234", "pooh", "pooh"};
    cout << count_if(a.cbegin(), a.cend(), is) << endl;
    auto iter = find_if_not(b.cbegin(), b.cend(), ::equal);
    cout << *(iter) << endl;
    for_each(a.begin(), a.end(), [](int x) { return 2 * x; });
    for (auto &&i : a)
    {
        cout << i<<" ";
    }
}

