#include<iostream>
using namespace std;

class A{
private:
    int x=10;
     friend class B;

public:
    void abc()
    {
        cout << "helolo" << endl;
    }

};

class B: private A{

public:
    void xyz()
    {
        cout << "which number is " << x << endl;

    }

};

int main()
{
    B obj;

    obj.xyz();

}
