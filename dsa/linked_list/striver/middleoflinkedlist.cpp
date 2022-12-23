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
    int middle1(ll *head)
    {
        ll *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            
            temp = temp->next;
            cnt++;
        }
        cnt = cnt / 2 + 1;
        //cout<<cnt;
        int count = 1;
        ll *temp1 = head;
        while (count != cnt)
        {
            temp1 = temp1->next;
            count++;
        }
        return temp1->data;
    }
    ll *deletemidlle(ll *head)
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
        ll *slow = head;
        ll *fast = head;
        ll *prv = slow;
        while (fast != NULL && fast->next != NULL)
        {
            prv = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ll *temp = prv->next;
        prv->next = slow->next;
        delete temp;
        return head;
    }
};
int main()
{
    ll *head = NULL;
    head->add(10, head);
    head->add(20, head);
    head->add(30, head);
    head->add(40, head);
    head->add(50, head);
    //head->add(6, head);
    head->print(head);
    cout << endl;
    cout << head->middle(head);
    cout << endl;
    cout << head->middle1(head);
   // head = head->deletemidlle(head);
   // head->print(head);
}