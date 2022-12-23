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

   
};
int main()
{
    ll *head = NULL;
    head->add(10, head);
    head->add(20, head);
    head->add(30, head);
    head->add(40, head);
    head->add(50, head);
    head->add(60, head);
    head->print(head);
    cout << endl;
   
}