// pass by value , passed head to the linked list
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
    int middle(ll *head)
    {
        auto sp = head, fp = head;
        // even = fp!=NULL
        //odd = fp->next!=NULL
        while (fp != NULL and fp->next != NULL)
        {
            sp = sp->next;
            fp = fp->next->next;
        }
        return sp->data;
    }
    ll *deletemiddle(ll *head)
    {
        if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
        auto sp = head, fp = head;
        // even = fp!=NULL
        //odd = fp->next!=NULL
        auto prv = sp;
        while (fp != NULL and fp->next != NULL)
        {
            prv = sp;
            sp = sp->next;
            fp = fp->next->next;
        }
        prv->next = sp->next;
        delete sp;
        return head;
    }
    ll *delete_all_ll(ll *head)
    {
        ll *prv = head;
         if (head == NULL){
        return NULL;
         }
        head = head->next;
        // when linked list contain only one node so that head null after 
        // head->next so we have handle by corner case 
        if(head==NULL){
            delete prv;
        }
        while (head != NULL)
        {
            delete prv;
            prv = head;
            head = head->next;
        }
        return head;
    }
};
int main()
{
    ll *head = NULL;
    head = head->add(1, head);
    /*head = head->add(2, head);
    head = head->add(3, head);
    head = head->add(4, head);
    head = head->add(5, head);
    head = head->add(6, head);*/
    head->print(head);
    cout << endl;
    cout << head->middle(head);
    cout << endl;
    head = head->deletemiddle(head);
    head->print(head);
    cout<<endl;
    head = head->delete_all_ll(head);
    head->print(head);
   
}