#include<iostream>
using namespace std;
#define size 5
int qu[size];
int front=-1;
int rear=-1;
void enqueue()
{
    if(rear==size-1)
        cout << "overflow." << endl;
    else
    {
        int data;
        cout << "Enter value:";
        cin >> data;
        if(rear==-1)
        {
            front++;
            rear++;
            qu[rear]=data;
        }
        else
        {
            rear++;
            qu[rear]=data;
        }
    }
}
void dequeue()
{
    if(rear==-1 && front==-1)
        cout << "Underflow" << endl;
    else
    {
        if(rear==front)
        {
            cout << "Deleted item " << qu[rear] << endl;
            front=-1;
            rear=-1;
        }
        else
        {
            cout << "Deleted item " << qu[front] << endl;
            front++;
        }
    }
}
void print()
{
    if(rear==-1 && front==-1)
        cout << "Queue is empty" << endl;
    else
    {
        for(int i=front;i<=rear;i++)
            cout << qu[i] << " ";
    }
    cout << endl;
}
void isfull()
{
   if(rear==size-1)
        cout << "Queue is full" << endl;
   else
        cout << "Queue is not full" << endl;
}
void isempty()
{
   if(rear==-1)
        cout << "Queue is empty" << endl;
   else
        cout << "Queue is not empty" << endl;
}
int main()
{
    cout << "Queue operations : \n1.Enqueue\n2.Dequeue\n3.Print Queue\n4.is Queue full\n5.is Queue empty\n6.End\n";
    while(1)
    {
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            {
                enqueue();
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                print();
                break;
            }
        case 4:
            {
                isfull();
                break;
            }
        case 5:
            {
                isempty();
                break;
            }
        case 6:
            {
                exit(0);
            }
        default:
            cout << "Invalid choice." << endl;
    }
    }
    return 0;
}

