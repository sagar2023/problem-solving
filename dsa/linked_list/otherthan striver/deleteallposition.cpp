#include <iostream>
using namespace std;
class ll;
class node
{
private:
    int data;
    node *next;

public:
    node()
    {
        data = -1;
        next = NULL;
    }
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    friend class ll;
};
class ll
{
private:
    node *head;

public:
    ll()
    {
        head = NULL;
    }
    void insertathead(int val)
    {
        node *newnode = new node(val);
      
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        else
        {
            node *temp = head;

            newnode->next = head;
            head = newnode;
        }
    }
    void display()
    {
        int cnt = 0;
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
            cnt++;
        }
        cout << endl;

        int count = 0;
        node *temp1 = head;
        while (temp1 != NULL)
        {

            int t = cnt / 2;
            if (count == t)
            {

                cout << temp1->data;
            }

            temp1 = temp1->next;
            count++;
        }
    }

    void insertattail(int val)
    {
        node *newnode = new node();
        newnode->data = val;

        if (head == NULL)
        {
            head = newnode;
            return;
        }

        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {

                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
};

int main()
{
    ll s;
    s.insertattail(1);
    s.insertattail(2);
    s.insertattail(3);
    s.insertattail(4);
    s.insertattail(5);
    s.insertattail(6);
    s.insertattail(7);

    s.display();
}