#include <bits/stdc++.h>
using namespace std;
class BST;
class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node()
    {
        data = -1;
        left = NULL;
        right = NULL;
    }
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

    friend class BST;
};
class BST
{

    // private:

public:
    Node *root;

    BST()
    {
        root = NULL;
    }

    void createRoot();
    void insertiterative();
    void inorder(Node *);
};

void BST::createRoot()
{
    Node *curr, *temp;
    int ans = 1;
    cout << "enter your data" << endl;
    do
    {

        curr = new Node();
        cin >> curr->data;
        curr->left = NULL;
        curr->right = NULL;

        if (root == NULL)
        {
            root = curr;
        }
        else
        {
            temp = root;
            while (1)
            {
                if (temp->data >= curr->data)
                {

                    if (temp->left == NULL)
                    {
                        temp->left = curr;
                        break;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else
                {
                    if (temp->right == NULL)
                    {
                        temp->right = curr;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
        cout << "you want to continue";
        cin >> ans;

    } while (ans == 1);
}

void BST::insertiterative()
{
  
    Node *curr , *temp;
    curr = new Node();
    cin >> curr->data;
    curr->left=NULL;
    curr->right=NULL;
    if(root==NULL){
        root=curr;
    }
    else{
        temp=root;
        while (1)
        {
            if(temp->data>curr->data){

                if(temp->left==NULL){
                    temp->left=curr;
                    break;
                }
                else{
                    temp=temp->left;
                }
            }
            else{
                if(temp->right==NULL){
                    temp->right=curr;
                    break;
                }
                else{
                    temp=temp->right;
                }
            }
        }
        
    }
}

void BST::inorder(Node *root)
{

    if (root->left)
        inorder(root->left);
    cout << root->data << " ";
    if (root->right)
        inorder(root->right);
}



int main()
{
    BST obj;
    int key, ch;
    do
    {
        cout << "\n1.create\n2.inorder\n3.insert\npress 0 to exit\n";
        cout << "enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.createRoot();
            break;
        case 2:
            obj.inorder(obj.root);
            break;
        case 3:
            obj.insertiterative();
            break;
        }

    } while (ch != 0);
}