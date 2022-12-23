#include <bits/stdc++.h>
using namespace std;
class btree;
class node {

    private:

    node *left;
    node *right;
    int data;
    

    public:
    node(){
        left=NULL;
        right=NULL;
        data=-1;
    }

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
    ~node(){

    }
    friend class btree;


};

class btree{

    private:

    node *root;
    public:
    btree(){
        root=NULL;
    }

    bool isEmpty(){
		return(root==NULL);
	}

    // void insert(int item)	{
	// 	node* newbie = new node();
	// 	node* parent = NULL;
	// 	newbie->left = NULL;
	// 	newbie->right= NULL;
	// 	newbie->data = item;
	// 	if(isEmpty()){
	// 		root = newbie;
	// 	}
	// 	else{
	// 		node* ptr = root;
	// 		while(ptr != NULL){
	// 				parent = ptr;
	// 				if(item > ptr->data){
	// 					ptr = ptr->right;
	// 				}
	// 				else if(item < ptr->data){
	// 					ptr = ptr->left;
	// 				}
	// 				else
	// 					cout << "This object already exists in the tree!"<< endl;
	// 			}
			
	// 		//now ptr can tell me where to put the newbie
	// 		if(item > parent->data ){			//put on the right
	// 			parent->right = newbie;
	// 		}
	// 		else if(item < parent->data ){				//put on the left
	// 			parent->left = newbie;
	// 		}
	// 	}
	// }


    node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
	node* getRoot(){
		return root;
	}
	void inorder(node* root){
		if(root != NULL){
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
		}
	}
	void postorder(node* root){
		if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
		}
	}
	void preorder(node* root){
		if(root != NULL){
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
		}
	}


};
int main(){



    btree tree;

    // tree.insert(5);
	// tree.insert(3);
	// tree.insert(9);
	// tree.insert(1);
	// tree.insert(4);
	// tree.insert(6);
	// tree.insert(15);

   
   node *val = tree.buildTree(tree.getRoot());
	tree.inorder(val);
	// cout << endl;
	// tree.postorder(tree.getRoot());
	// cout << endl;
	// tree.preorder(tree.getRoot());



}