// pass by value , passed head to the linked list
#include <iostream>
using namespace std;
#include <stack>
class ll
{
public:
    int data;
    ll *next;
    ll()
    {
        this->next = NULL;
    }
    ll(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    ll *add(int val, ll *head)
    {
        if (head == NULL)
        {
            ll *newnode = new ll(val);
            head = newnode;
        }
        else
        {
            ll *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new ll(val);
        }
        return head;
    }

    void print(ll *head)
    {
        ll *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    ll *deleteatend(ll *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        ll *temp = head;
        ll *prv = temp;
        while (temp->next != NULL)
        {
            prv = temp;
            temp = temp->next;
        }
        prv->next = temp->next;
        delete temp;
        return head;
    }
    void reverseprint(ll *head){
        if(head==NULL){
            return;
        }
        reverseprint(head->next);
        cout<<head->data<<"->";
    }
    ll* reversebythreepointer(ll *head){
        ll *curr=head;
        ll *prv=NULL;
        ll *next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prv;
            prv=curr;
            curr=next;
        }
        head=prv;
        return head;
    }
   
};
int main()
{
    ll *head = NULL;
    head = head->add(1, head);
    head = head->add(2, head);
    head = head->add(3, head);
    head = head->add(4, head);
    head = head->add(5, head);
    head = head->add(6, head);
    head->print(head);
    cout << endl;
    head = head->deleteatend(head);
    head->print(head);
    cout<<endl;
    head->reverseprint(head);
    cout<<endl;
    head=head->reversebythreepointer(head);
    head->print(head);
}