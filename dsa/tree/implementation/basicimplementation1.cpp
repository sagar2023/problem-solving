 #include <bits/stdc++.h>
 using namespace std;
class BTree;
 class Node{
    private:
    int data;
    Node *left;
    Node *right;
    public:

    Node(){
        data=-1;
        left=NULL;
        right=NULL;

    }

    Node (int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;

    }

    ~Node(){

    }
    friend class BTree;

 };

class BTree{

    private:
    Node *root;

    public:
    BTree(){
        root=NULL;
    }

    Node *getroot(){
        return root;
    }
    void setRoot(Node *t)
        {
            root = t;
        }
    Node * CreateNode();
    void inorder(Node *root);
    void preorder(Node *root);
    void postorder(Node *root);
    void inordernr(Node *root);
    void preordernr(Node *root);
    void postordernr2st(Node *root);
    void postordernr1st(Node *root);
    void alltraversal(Node *root);


};


Node *BTree::CreateNode(){

            int data ;
            cout<<"Enter value or enter -1 for Null : ";
            cin>>data;
            if(data==-1)
                return NULL;
            Node *p= new Node(data);
            cout<<"Enter value for left child of node "<<p->data<<" : "<<endl;
            p->left=CreateNode();
            cout<<"Enter value for right child of node "<<p->data<<" : "<<endl;
            p->right=CreateNode();
            return p;

}
 
// dfs travesal recursive
void BTree::inorder(Node *root){


            if(root==NULL) return;
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        
}

void BTree::preorder(Node *root){
        if(root==NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
}

void BTree::postorder(Node *root){

    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

//  dfs traversal non recursive  

void BTree::inordernr(Node *root){


    stack<Node*>st;
    vector<int>v;
    //st.push(root);
    while(true){

        if(root!=NULL){
            st.push(root);
            root=root->left;
        }
        else{

            if(st.empty()==true) break;
            root= st.top();
            
            st.pop();
            v.push_back(root->data);
            root=root->right;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

void BTree::preordernr(Node *root){

    stack<Node*>st;
    st.push(root);
    vector<int>v;
    while(!st.empty()){

        v.push_back(root->data);
        if(root->right) st.push(root->right);
        if(root->left) st.push(root->left);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}

void BTree::postordernr2st(Node *root){

    stack<Node*>st1;
    stack<Node*>st2;
    cout<<"orei"<<endl;
    Node *curr=root;
    st1.push(curr);
    while(!st1.empty()){
        curr=st1.top();
        st1.pop();
        st2.push(curr);
        if(curr->left) st1.push(curr->left);
        if(curr->right) st1.push(curr->right);
    }

    while(!st2.empty()){
        cout<<st2.top()->data<<" ";
        st2.pop();

    }
}

void BTree::postordernr1st(Node *root){

    stack<Node*>st;
    vector<int>v;
    while(root!=NULL && !st.empty()){
        if(root!=NULL){
            st.push(root);
            root=root->left;
        }
        else{

            Node *temp = st.top()->right;
            if(temp==NULL){

                temp=st.top();
                st.pop();
                v.push_back(temp->data);
                while(!st.empty() && temp==st.top()->right){
                    temp=st.top();
                    v.push_back(temp->data);
                    st.pop();
                }
            }
            else{
                root=temp;
            }
        }
    }
}

// all traversal using one stack 

void BTree::alltraversal(Node *root){

    stack<pair<Node*,int>>st;
    vector<vector<int>>res;
    vector<int>pre,ino,post;
    if(root==NULL) return;
    st.push({root,1});
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            ino.push_back({it.first->data});
            it.second++;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    cout<<"preorder traveral "<<endl;
    for(auto i:pre){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"inorder traversal "<<endl;
    for(auto i:ino){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    for(auto i:post){
        cout<<i<<" ";
    }
    cout<<endl;

}
 int main(){

    BTree t;

     t.setRoot(t.CreateNode());
    cout<<"inoder traversal"<<endl;
     t.inorder(t.getroot());
     cout<<endl;

    //  cout<<"preorder traversal"<<endl;
    //  t.preorder(t.getroot());
    // cout<<endl;

    //  cout<<"postorder traversal"<<endl;
    //  t.postorder(t.getroot());
    // cout<<endl;

    //  cout<<"inorder traversal by non recursive"<<endl;
    //  t.inordernr(t.getroot());
    //  cout<<endl;

    //  cout<<"preorder traversal by non recursive"<<endl;
    //  t.preorder(t.getroot());
    //  cout<<endl;

     cout<<"postorder traversal by 2 stack non recursive"<<endl;
     t.postordernr2st(t.getroot());
     cout<<endl;

     cout<<"posorder traversal by 1 stack non recursive "<<endl;
     t.postordernr1st(t.getroot());
     cout<<endl;

     cout<<"all traversal in one go using non recursive and 1 stack solution "<<endl;
     t.alltraversal(t.getroot());
     cout<<endl;


 }