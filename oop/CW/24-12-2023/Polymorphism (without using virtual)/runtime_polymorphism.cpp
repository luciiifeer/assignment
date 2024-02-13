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
    int u;
    void print()
    {
        cout<<"Let's try again with Polymorphism"<<endl;
    }
};
int main()
{
    ClassTwo up;
    up.ClassOne::print();
}
