#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw "Exception occurred";

    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
        cerr<<msg<<endl;
    }
    return 0;
}
