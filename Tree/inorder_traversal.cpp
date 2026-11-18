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
//inorder function
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left );
    cout<<root->data<<" ";
    inorder(root->right );
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
    inorder(root);

}