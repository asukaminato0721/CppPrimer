/*
* Copyright (c)2020
*All rights reserved.
*
* �ļ����ƣ�5.4.1.cpp
* ժ    Ҫ����Ҫ�������ļ�������
*
* ��ǰ�汾��1.0
* ��    �ߣ�wuyudi
* ������ڣ�2020 �� 04 �� 21 �� ���ڶ�
*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    vector<string> word;
    string temp;
    while (cin >> temp)
    {
        word.push_back(temp);
    }
    temp = word[0];
    vector<string>::size_type max_ = 1, global_max = 0;
    if (word.size() == 1)
    {
        cout << "none";
    }
    else
    {
        for (auto i = word.begin() + 1; i != word.end(); ++i)
        {
            if (*i == temp)
            {
                ++max_;
                if (global_max < max_)
                {
                    global_max = max_;
                }
            }
            else
            {
                if (global_max < max_)
                {
                    global_max = max_;
                }
                max_ = 1;
            }
            temp = *i;
        }
    }
    // �ж��Ƿ���������
    if (global_max > 1)
    {
        cout << global_max;
    }
    else
    {
        cout << "none";
    }
}
