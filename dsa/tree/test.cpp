#include <iostream>
using namespace std;
class ll;
class node
{
private:
    int data;
    node *left;
    node *right;

public:
    node()
    {
        data = -1;
        left = NULL;
        right=NULL;

    }
    node(int val)
    {
        this->data = val;
        this->left= NULL;
        this->right=NULL;
    }
    friend class tree;
};
class tree
{
private:
    node *root;

public:
    tree()
    {
        root = NULL;
    }
    
};

int main()
{
  tree obj;

}
