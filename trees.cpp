#include<iostream>
using namespace std;
struct node
{
  int data;
  int *right,*left;
  Node(int v)
  {
    data = v;
    left=right=nullptr;
  }
  void print(strut Node* node)
  {
    if(node==nullptr)
    {
        return;
    }
    print(node->left);
    cout<< node->data <<" ";
    print(node->right)
  }
};

    int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    cout << "Inorder traversal of binary tree is: \n";
    print(root);

    return 0;
}
