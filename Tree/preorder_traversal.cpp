#include<iostream>
using namespace std;
//create class node
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    // constructor
    Node(int value)
    {
        data=value;
        left= NULL;
        right = NULL;
    }
};
//preorder function
void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
     preorder(root->left );
    preorder(root->right );
}
int main()
{   
    //create nodes
    Node* root = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    //connecting nodes
    root->left=second;
    root->right=third;

    second->left= fourth;
    second->right= fifth;


    //print function
    preorder(root);

}