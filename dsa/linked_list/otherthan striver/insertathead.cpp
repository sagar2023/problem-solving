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
        node *newnode = new node();
        newnode->data = val;

        if (head == NULL)
        {
            head = newnode;
            
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
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    ll s;
    s.insertathead(2);
   // s.insertathead(4);
   // s.insertathead(8);
    s.display();
}