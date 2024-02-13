#include <bits/stdc++.h>

using namespace std;

class MyClass
{
public:
    int i;
    void add() final
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
cout<<"NULL"<<endl;
    }
    void sub()
    {
        cout<<"You called sub fn."<<endl;
    }
    void add()
    {
        int i=2,j=6;
        int a=i+j;
        cout<<"Sum: " << i+j;
    }
};


int main()
{
    MyClass ant;
    MyClass_Two pop;

    pop.add();
}
