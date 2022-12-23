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
    void add(int val, ll *&head)
    {
        if (head == NULL)
        {
            ll *newnode = new ll(val);
            head=newnode;
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
        
    }

    void print(ll *head)
    {
        ll *temp = head;
        int cnt = 0;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
            cnt++;
        }
       
    }
   
   
    ll *deletenthnodefromend(ll *head, int n)
    {

        int cnt = 0;
        ll *temp = head;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n)
        {
            ll *ty = head;
            head = head->next;
            delete ty;
            return head;
        }
        else
        {
            int k = cnt - n;
            ll *temp1 = head;
            int count = 1;
            while (count != k)
            {

                temp1 = temp1->next;
                count++;
            }
            ll *node = temp1->next;
            temp1->next = temp1->next->next;
            delete node;
            return head;
        }
    }
    ll *delenode(ll *head)
    {
        int n=4;
        ll *temp = head;
        int l = 0;
        while (temp)
        {
            temp = temp->next;
            l++;
        }

        if (l == n)
        {
            return head->next;
        }
        ll *p = head;
        int j = 0;
        for (int i = 0; i < l - n - 1; i++)
        {
            p = p->next;
            j++;
        }
        ll *del = p->next;
        p->next = del->next;
        delete del;
        return head;
    }
    ll *deletefromend(ll* head,int n){
        ll *slow=head;
        ll *fast=head;
        for(int i=0;i<n;i++){
            if(fast->next==NULL){
                ll *node =head;
                head=head->next;
                delete node;
                return head;
            }
            
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ll *temp=slow->next;
        slow->next=slow->next->next;
        delete temp;
        return head;

    }
  
};
int main()
{
    ll *head = NULL;
    head->add(1, head);
    head->add(2, head);
     head->add(3, head);
      head->add(5, head);

    head->add(4, head);
    head->add(6, head);
    head->print(head);
    cout<<endl;
    //  cout<<head->isPalindrome(head,head);
    //head = head->deletenthnodefromend(head, 6);
    //head=head->delenode(head);
    //head=head->deletenthnodefromend(head,4);
    //head->print(head);
    head=head->deletefromend(head,6);
    head->print(head);
}