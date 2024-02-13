# include <bits/stdc++.h>

using namespace std;


class MyClass{
public:
    static int i;

    static void printmsg()
    {
        cout<< "Welcome to GfG"<<endl;
        cout<<i<<endl;
        rm();
    }

    static void rm()
    {
        cout<<"Another method"<<endl;
    }
};

int MyClass::i=50;

int main()
{
/*MyClass obj;
    obj.printmsg();*/
    MyClass::printmsg();            //without object reference. Object Independent.
}
