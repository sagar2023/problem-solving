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
    void insert(int val);
    void deletetail();
    void deletehead();
    void deleteatpos(int pos);
    void display();
};
void ll::insert(int val)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->next = NULL;
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
        newnode->next = NULL;
    }
}
void ll::display()
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "no of nodes in linked list : " << count << endl;
}
void ll::deletetail()
{
    node *ptr, *ptr1;
    if (head == NULL)
    {
        cout << "empty list" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        cout << "only one in linked list has deleted" << endl;
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        cout << "node deleted from end of linked list" << endl;
    }
}
void ll::deletehead()
{
    
    if (head == NULL)
    {
        cout << "empty list" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        cout << "only one in linked list has deleted" << endl;
    }
    else{
        node *temp=head;
        head=head->next;
        free(temp);
    }


}
void ll::deleteatpos(int loc){
   
    
       node *ptr, *ptr1;  
        int i;   
         
        ptr=head;  
        for(i=0;i<loc;i++)  
        {  
            ptr1 = ptr;       
            ptr = ptr->next;  
              
            
        }  
        ptr1 ->next = ptr ->next;  
        free(ptr);  
         
    

}
int main()
{
    ll l;
    l.insert(2);
    l.insert(5);
    l.display();
    l.deletehead();
    l.display();
    l.insert(7);
    l.insert(8);
    l.deletetail();
    l.display();
    l.deleteatpos(0);
    l.display();
}