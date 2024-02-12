#include<iostream>
using namespace std;
#define size 5
int stk[size];
int top=-1;
void push()
{
    if(top==size-1)
        cout << "Overflow." << endl;
    else
    {
        int data;
        cout << "Enter value : ";
        cin >> data;
        top++;
        stk[top]=data;
    }
}
void pop()
{
    if(top==-1)
        cout << "Underflow." << endl;
    else
    {
        cout << "Popped item " << stk[top] << endl;
        top=top-1;
    }
}
void peek()
{
    cout << "Peeked item " << stk[top] << endl;
}
void print()
{
    if(top==-1)
        cout << "Stack is empty" << endl;
    else
    {
        for(int i=0;i<=top;i++)
            cout << stk[i] << " ";
    }
    cout << endl;
}
void isfull()
{
    if(top==size-1)
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full." << endl;
}
void isempty()
{
    if(top==-1)
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty" << endl;
}
int main()
{
    cout << "Stack operations : \n1.Push\n2.Pop\n3.Peek\n4.Print stack\n5.is stack full\n6.is stack empty\n7.End\n";
    while(1)
    {
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                peek();
                break;
            }
        case 4:
            {
                print();
                break;
            }
        case 5:
            {
                isfull();
                break;
            }
        case 6:
            {
                isempty();
                break;
            }
        case 7:
            {
                exit(0);
            }
        default:
            cout << "Invalid choice." << endl;
    }
    }
    return 0;
}
