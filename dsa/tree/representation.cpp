#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	// Val is the key or the value that
	// has to be added to the data part
    Node (){
        left=NULL;
        right=NULL;
        data=-1;
    }
	Node(int val)
	{
		data = val;

		// Left and right child for node
		// will be initialized to null
		left = NULL;
		right = NULL;
	}
    Node *CreateNode(int data);
    void inorder(Node *temp);
};
Node *Node::CreateNode(int data)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void Node:: inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}
int main()
{
    Node *obj;
	Node* root = obj->CreateNode(10);
    root->left = obj->CreateNode(11);
    root->left->left = obj->CreateNode(7);
    root->right = obj->CreateNode(9);
    root->right->left = obj->CreateNode(15);
    root->right->right = obj->CreateNode(8);
 
    cout << "Inorder traversal before insertion: ";
    obj->inorder(root);
    cout << endl;
}
