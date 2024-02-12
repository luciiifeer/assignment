#include <bits/stdc++.h>
using namespace std;
#define Vr 7

int graph[Vr][Vr] = {0};

void cgraph(int n1,int n2)
{
    graph[n1][n2]=1;
    graph[n2][n1]=1;
}
void printMatrix()
{
    cout << "    1 2 3 4 5 6 7" << endl << endl;
    for (int i = 1; i <= Vr; i++)
    {
        cout << i << ":  ";
        for (int j = 1; j <= Vr; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
void printAdjacencyList()
{
    for (int i = 1; i <= Vr; i++)
    {
        cout << i << ": ";
        for (int j = 1; j <= Vr; j++)
        {
            if(graph[i][j]==1)
                cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    cgraph(1,2);
    cgraph(1,3);
    cgraph(2,3);
    cgraph(2,5);
    cgraph(2,6);
    cgraph(3,4);
    cgraph(3,6);
    cgraph(4,7);
    cgraph(5,6);
    cgraph(6,7);
    cout << "Print Matrix :" << endl;
    printMatrix();
    cout << "Print Adjacency List :" << endl;
    printAdjacencyList();
    return 0;
}
