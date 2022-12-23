#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;


};

struct Edge{
    int src , dest;


};
class Graph{
    private:
    Node *getadj(int dest , Node* head){
        Node *newnode = new Node;
        newnode->val=dest;
        return newnode;
    }
    int n ;

    public:
    Node **head;
    


};
int main(){

}