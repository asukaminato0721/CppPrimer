/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：12.26.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 06 日 星期三
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int n = 5;
    allocator<string> alloc;
    auto const p = alloc.allocate(n); //p 指向头部
    string s;
    auto q = p;
    while (cin >> s && q != p + n)
    {
        alloc.construct(q++, s); //q 作为迭代器指向已填充的尾部
    }
    for (auto i = p; i != q; ++i)
    {
        cout << *i << " ";
    }
    // 销毁元素
    while (q != p)
    {
        alloc.destroy(--q);
    }
    //释放
    alloc.deallocate(p, n);
    return 0;
}
