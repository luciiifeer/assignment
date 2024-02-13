#include<bits/stdc++.h>
using namespace std;
class ClassOne
{
public:
    int n;
    void print()
    {
        cout<<"Let's try Polymorphism"<<endl;
    }
};
class ClassTwo:public ClassOne
{
public:
    int m;
    void print()
    {
        cout<<"Let's try again with Polymorphism"<<endl;
    }
};
int main()
{
    ClassTwo up;
    ClassOne*ant;
    ant=&up;
    ant->print();
}
