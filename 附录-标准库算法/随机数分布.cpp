/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：随机数分布.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 22 日 星期五
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    uniform_int_distribution<> u;
    uniform_real_distribution<> u1;
    bernoulli_distribution ber;
    binomial_distribution<> ber1;
    geometric_distribution<> geo;
    negative_binomial_distribution<> nb;
    poisson_distribution<> p;
    exponential_distribution<> e;
    gamma_distribution<> g;
    weibull_distribution<> w;
    extreme_value_distribution<> ex;
    normal_distribution<> n;
    lognormal_distribution<> ln;
    chi_squared_distribution<> c;
    cauchy_distribution<> ch;
    fisher_f_distribution<> f;
    student_t_distribution<> s;
    return 0;
}