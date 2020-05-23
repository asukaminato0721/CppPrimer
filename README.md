# CppPrimer

C++ Primer 练习题备份

曾经的我是把 C++ 当成 C with sort 来用的。直到后来得知了 C++ Primer 。

---

曾经的我：

```c++
int foo(int a,int b)
{
    return a+b;
}
```

现在的我：

```c++
int foo(const int & a,const int &b)
{
    return a+b;
}
```

---

曾经的我：

> 怎么又出界了，for print 好烦啊

现在的我：

```c++
template <typename T>
void print(const T &a)
{
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
}
```

---

曾经的我：

> 把一个列表每个元素*2 还得 for 。

现在的我：

```c++
template <typename T>
void times2(T &a)
{
    for_each(a.begin(),a.end(),[](int &x){return 2*x;});
}
```

---

曾经的我：

> 末尾不能有多余的空格好烦

现在的我：

```c++
vector<int> a={1,2,3,4,5};
copy(a.cbegin(), a.cend(), ostream_iterator<int>(cout, " "));
cout << endl;
```

---

曾经的我：

> rand 好难用

现在的我：

> uniform_real_distribution 真好用

---

曾经的我：

前缀和写起来有点麻烦

现在的我：

```c++
vector<int> a = {1, 2, 3, 4, 5};
vector<int> dest;
partial_sum(a.cbegin(), a.cend(), back_inserter(dest));
```
