// at the time of modification of linked list we have to pass by ref head  and 
// when you pass the by ref then we do not have return but we pass by
// value then we have return value of particalr data type 
// pass by value : ll* add(ll* head,int data) ->return head
// pass by ref :  void add(ll* &head,int data) ->no need to return 
#include <iostream>
using namespace std;
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
    ll* add(int val, ll* head)
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

    void print(ll *head){
        ll *temp=head;
        while (temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

        }
        cout<<"NULL";
       
    }
};
int main()
{
    ll *head=NULL;
    head=head->add(1,head);
    head=head->add(2,head);
    head=head->add(3,head);
    head=head->add(4,head);
    head=head->add(5,head);
    head=head->add(6,head);
    head->print(head);
    
}