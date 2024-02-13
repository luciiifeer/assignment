#include <iostream>
using namespace std;

class MyClass{
private:
    int p=10;
    void abc()
    {
        cout << "from abc..."<< endl;
    }
    friend class ab;

protected:
    int pv;

public:
};

class ab {
public:
    void display()
    {
        MyClass obj2;
        cout <<obj2.p << endl;
        obj2.abc();
}
};

int main()
{
    ab obj;
    obj.display();
    return 0;
}

