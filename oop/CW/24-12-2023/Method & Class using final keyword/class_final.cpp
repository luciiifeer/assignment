#include <bits/stdc++.h>

using namespace std;

class MyClass final
{
public:
    int i;
    void add()
    {
        cout<<"You called add fn."<<endl;
    }
    void div()
    {
        cout<<"You called div fn."<<endl;
    }
};

class MyClass_Two: public MyClass
{
public:
    int y;
    void sum()
    {
You sent
MyClass boj;
        boj.add();
        cout<<"NULL"<<endl;
    }
    void sub()
    {
        cout<<"You called sub fn."<<endl;
    }
};


int main()
{
    MyClass ant;
    MyClass_Two pop;

    ant.add();
}
