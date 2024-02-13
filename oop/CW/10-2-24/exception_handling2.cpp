#include <bits/stdc++.h>


using namespace std;

class NegativeAgeException
{
public:
    string message = "Age cannot be negative.";
};

class DivisionByZeroException
{
public:
    string message = "Division by zero is not allowed.";
};

void processUserInput()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        throw NegativeAgeException();
}

    int divisor;
    cout << "Enter a divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        throw DivisionByZeroException();
    }

    cout << "You are " << age << " years old and the result of dividing your age by the divisor is " << age / divisor << endl;
}

int main() {
    try
    {
        processUserInput();
    }
    catch (const NegativeAgeException& e)
    {
        cerr << "Error: " << e.message << endl;
    }
    catch (const DivisionByZeroException& e)

{
        cerr << "Error: " << e.message << endl;
    }

    return 0;
}

