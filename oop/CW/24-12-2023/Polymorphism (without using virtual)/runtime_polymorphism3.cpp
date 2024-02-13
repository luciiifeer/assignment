#include<bits/stdc++.h>
using namespace std;
class ClassOne
{
public:
    int m;
    void print()
    {
        cout<<"Let's try Polymorphism"<<endl;
    }
};

class ClassTwo:public ClassOne
{
public:
    int u;
    void print()
    {
        cout<<"Let's try again with polymorphism "<<endl;
    }
};
int main()
{
    ClassTwo up,down;
    up.print();
    down.ClassOne::print();
}
