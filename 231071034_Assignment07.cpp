#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
struct node* root;
void PreOrder(struct node* root)
{
    if(root==NULL)
        return;
    else
    {
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void InOrder(struct node* root)
{
    if(root==NULL)
        return;
    else
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}
void PostOrder(struct node* root)
{
    if(root==NULL)
        return;
    else
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}
void LeftMost(struct node* root)
{
    if(root==NULL)
        return;
    else
    {
        while(root->left!=NULL)
        {
            root=root->left;
        }
        cout << root->data;
    }
}
void RightMost(struct node* root)
{
    if(root==NULL)
        return;
    else
    {
        while(root->right!=NULL)
        {
            root=root->right;
        }
        cout << root->data << " ";
    }
}
int countNode(struct node* root)
{
    if(root==NULL)
        return 0;
    return 1 + countNode(root->left) + countNode(root->right);

}
int Height(struct node* root)
{
    if(root==NULL)
        return -1;
    return 1+max(Height(root->left),Height(root->right));
}
int Depth(struct node* root,int x)
{
    if(root==NULL)
        return -1;
    int dist=-1;
    if((root->data==x)||(dist=Depth(root->left,x))>=0||(dist=Depth(root->right,x))>=0)
        return dist+1;
    return dist;

}
struct node* BST(struct node* root, int value)
{
    if(root==NULL)
        return createnode(value);
    if(value < root->data)
        root->left=BST(root->left,value);
    else if(value > root->data)
        root->right=BST(root->right,value);
    return root;

}
bool findElement(struct node* root,int element)
{
    if(root==NULL)
        return false;
    else if(root->data==element)
        return true;
    else if (root->data > element)
        return findElement(root->left,element);
    else
        return findElement(root->right,element);
}
int maximum(struct node* root)
{
    if(root==NULL)
        return INT_MIN;
    int max=root->data;
    int LM=maximum(root->left);
    int RM=maximum(root->right);
    if(LM>max)
        max=LM;
    if(RM>max)
        max=RM;
    return max;
}
int minimum(struct node* root)
{
    if(root==NULL)
        return INT_MAX;
    int min=root->data;
    int LM=minimum(root->left);
    int RM=minimum(root->right);
    if(LM<min)
        min=LM;
    if(RM<min)
        min=RM;
    return min;
}
int main()
{
    struct node* A=createnode(10);
    struct node* B=createnode(20);
    struct node* C=createnode(30);
    struct node* D=createnode(40);
    struct node* E=createnode(50);
    struct node* F=createnode(60);
    struct node* G=createnode(70);
    A->left=B;
    A->right=C;
    A->left->left=D;
    A->left->right=E;
    A->right->left=F;
    A->right->right=G;

    root=A;
    cout << "Pre-order :" << endl;
    PreOrder(A);
    cout << endl;
    cout << "In-order :" << endl;
    InOrder(A);
    cout << endl;
    cout << "Post-order :" << endl;
    PostOrder(A);
    cout << endl;
    cout << "Left Most :" << endl;
    LeftMost(A);
    cout << endl;
    cout << "Right Most :" << endl;
    RightMost(A);
    cout << endl;
    int res=countNode(A);
    cout << "Total nodes are " << res << endl;
    cout << "The height of " << A->data << " is " << Height(A) << endl;
    cout << "The height of " << B->data << " is " << Height(B) << endl;
    cout << "The height of " << G->data << " is " << Height(G) << endl;
    cout << "The Depth of " << A->data << " is " << Depth(A,10) << endl;
    cout << "The Depth of " << B->data << " is " << Depth(A,20) << endl;
    cout << "The Depth of " << G->data << " is " << Depth(A,70) << endl;

    root=BST(root,50);
    BST(root,30);
    BST(root,20);
    BST(root,40);
    BST(root,70);
    BST(root,60);
    BST(root,80);
    cout << "In-order Binary search Tree traversal\n";
    InOrder(root);
    cout << endl;
    int element=90;
    if(findElement(root,element))
       cout << element << " found" << endl;
    else
        cout << element << " not found" << endl;
    element=60;
    if(findElement(A,element))
       cout << element << " found" << endl;
    else
        cout << element << " not found" << endl;
    struct node* root=NULL;
    cout << "The maximum is " << maximum(A) << endl;
    cout << "The minimum is " << minimum(A) << endl;

}
