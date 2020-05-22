/*
* Copyright (c)2020
*All rights reserved.
*
* 文件名称：12.3.cpp
* 摘    要：简要描述本文件的内容
*
* 当前版本：1.0
* 作    者：wuyudi
* 完成日期：2020 年 05 月 06 日 星期三
*/
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
using line_no = vector<string>::size_type;

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    while (true)
    {
        cout << "q : quit";
        string s;
        if (!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s)) << endl;
    }
}
class QueryResult;
class TextQuery
{
public:
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_no>>> wm;
};
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text))
    {
        file->push_back(text);
        int n = file->size() - 1;
        istringstream line(text);
        string word;
        while (line >> word)
        {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}
class QueryResult
{
    friend ostream &print(ostream &, const QueryResult &);

public:
    QueryResult(
        string s,
        shared_ptr<set<line_no>> p,
        shared_ptr<vector<string>> f) : sought(s), lines(p), file(f) {}

private:
    string sought;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};
ostream &print(ostream &os, const QueryResult &qr)
{
    os << qr.sought << "  occurs" << qr.lines->size() << endl;
    for (auto num : *qr.lines)
    {
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << endl;
    }
}
QueryResult
TextQuery::query(const string &sought) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(sought);
    if (loc == wm.end())
    {
        return QueryResult(sought, nodata, file);
        /* code */
    }
    else
    {
        return QueryResult(sought, loc->second, file);
    }
}

int main()
{

    return 0;
}