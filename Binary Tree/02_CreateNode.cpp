// https://www.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
}

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution
{
public:
    void create_tree(node *root0, vector<int> &vec)
    {
        root0->left = newNode(vec[1]);
        root0->right = newNode(vec[2]);
        root0->left->left = newNode(vec[3]);
        root0->left->right = newNode(vec[4]);
        root0->right->left = newNode(vec[5]);
        root0->right->right = newNode(vec[6]);
    }
};