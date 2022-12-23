#include <iostream>
#include<string>
using namespace std;
class Node

{
    private:
    string word,meaning;
     Node *left,*right;
    public:
     friend class BST;
     Node()
     {
     word ="";
     meaning="";
    left=NULL;
      right=NULL;

     }
     Node(string word, string meaning)
     {
      this->word=word;
      this->meaning=meaning;
      left=NULL;
      right=NULL;
     }
};
class BST{
    private:
        Node *root;
    public:
        BST()
        {
            root=NULL;

        }
    void create();
    int insert(string word,string meaning);
    void inorder_rec(Node *root);
    void postorder_rec(Node *rnode);
    int searchNode(Node *&, Node *&, string);
    Node *Successor(Node *);
    void deleteNode(string);
    void updateMeaning(Node *temp, string keyw);


     Node *getRoot()
        {
            return root;
        }



        };

void BST:: create(){
    int n;
     string wordI,meaningI;
     cout<<"\nHow many Word to create?:\n";
     cin>>n;
     for(int i=0;i<n;i++)
     {
      cout<<"\nEnter Word: ";
      cin>>wordI;
      cout<<"\nEnter Meaning: ";
      cin>>meaningI;
        insert(wordI,meaningI);

     }
    }
int BST::insert(string word, string meaning)
        {
         Node *p=new Node(word, meaning);
         if(root==NULL)
         {
          root=p;
          return 1;
         }
         Node *cur=root;
         Node *par=root;
         while(cur!=NULL) //traversal
         {
          if(word>cur->word)
          {par=cur;
          cur=cur->right;
          }
          else if(word<cur->word)
          {
           par=cur;
           cur=cur->left;
          }
          else
          {
           cout<<"\nWord is already in the dictionary.";
           return -1;
          }
         }
         if(word>par->word) //insertion of node
         {
          par->right=p;
          return 1;
         }
         else
         {
          par->left=p;

          return 1;
         }
        }
    void BST::inorder_rec(Node *root)
    {
     if(root)
     {
      inorder_rec(root->left);
      cout<<" "<<root->word<<" : "<<root->meaning<<endl;
      inorder_rec(root->right);
     }
    }


    void BST::postorder_rec(Node *rnode)
{
    if(rnode)
    {
        postorder_rec(rnode->right);
        cout<<" "<<rnode->word<<" : "<<rnode->meaning<<endl;
        postorder_rec(rnode->left);
    }
}

int BST::searchNode(Node *&current, Node *&parent, string keyword) //function to searchNode a word node
{
    int count=0;
    if(root==NULL)
    {
        cout<<"Tree is Empty";
        return-1;
    }
    while (current != NULL && current->word != keyword)
    {
         count++;
         parent = current;
         if (keyword < current->word)
         {
             current = current->left;
         }
         else
         {

             current = current->right;
         }
         if(current==NULL)
         {
             return-1;
             break;

         }
    }
    return count;

}
Node *BST::Successor(Node *tmp) //function to find inorder successor for delete node operation
{
    while (tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp;
}

void BST::deleteNode(string key)
{
    Node *parent = NULL;
    Node *current = root;
    searchNode(current, parent, key);
    if (current == NULL)
    {
        cout << "Word Node not found to delete!!";
        return;
    }

    if (current->left == NULL && current->right == NULL)
    {
        if (current != root)
        {
            if (parent->left == current)
            {
                parent->left = NULL;
            }
            else
            {
                parent->right = NULL;
            }
        }
        else
        {
            root = NULL;
        }

        delete current;
    }
    else if (current->left && current->right)
    {
        Node *inorderSuccessor = Successor(current->right);
        string kword = inorderSuccessor->word;
        deleteNode(kword);
        current->word = kword;
    }
    else
    {
        Node *child = (current->left) ? current->left : current->right;
        if (current != root)
        {
            if (current == parent->left)
            {
                parent->left = child;
            }
            else
            {
                parent->right = child;
            }
        }
        else
        {
            root = child;
        }

        delete current;
    }
    cout << "Word deleted successfully!!";
}
void BST::updateMeaning(Node *temp, string keyw)
{
    string meaning;
    Node *par = NULL;
    Node *curr = temp;
    searchNode(curr,par, keyw);
    if (curr != NULL)
    {
        cout <<"Keyword "<<curr->word<<" found!!\n";
        cout << "Meaning was: " << curr->meaning << endl;
        cout << "Enter new Meaning: ";
        cin >> meaning;
        curr->meaning = meaning;
        cout << "Keyword's meaning updated!!!" << endl;
    }
    else
        cout << "keyword "<<curr->word<<" not found!!\n";
}
int main()
{
    BST d;
    int ch;
    string words;

    while (true)
     {
        cout << "\n\t------MENU------";
        cout << "\n1.Insert word"
                "\n2.search word"
                "\n3.Ascending order"
                "\n4.Descending order"
                "\n5.Update Meaning"
                "\n6.Delete"
                "\n7.Quit";
        cout << "\nEnter choice:- ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            d.create();
            break;
        case 2:
            {
                int c;
                Node *val=d.getRoot();

                cout << "\n the keyword to search:- ";
                cin >> words;
                c=d.searchNode(val,val,words);
                if(c==-1)
                {
                    cout<<"No such exist";
                }
                else
                {
                    cout<<"Number of Comparisons:- "<<c<<endl;

                }

                break;
            }

        case 3:
            cout<<"Ascending order\n";
            d.inorder_rec(d.getRoot());
            break;
        case 4:
            cout<<"\nDescending order:\n";
            d.postorder_rec(d.getRoot());
            break;
        case 5:
            cout << "\n\tEnter the keyword to update:- ";
            cin >> words;
            d.updateMeaning(d.getRoot(), words);
            break;
        case 6:
            cout << "\n\tEnter the keyword to delete:- ";
            cin >> words;
            d.deleteNode(words);
            break;
        case 7:
            break;

        default:
            cout << "\nEnter valid choice!!";
            break;
        }
    }
    return 0;
}


// output

/*
        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 1

How many Word to create?:
5

Enter Word: sagar

Enter Meaning: hjfs

Enter Word: fskn

Enter Meaning: wjrr

Enter Word: ewor

Enter Meaning: rmwk

Enter Word: wioj

Enter Meaning: wufjwa

Enter Word: qfmffni

Enter Meaning: fhkqfJ

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 2

 the keyword to search:- sagar
Number of Comparisons:- 0

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 3
Ascending order
 ewor : rmwk
 fskn : wjrr
 qfmffni : fhkqfJ
 sagar : hjfs
 wioj : wufjwa

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 4

Descending order:
 wioj : wufjwa
 sagar : hjfs
 qfmffni : fhkqfJ
 fskn : wjrr
 ewor : rmwk

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 5

        Enter the keyword to update:- sagar
Keyword sagar found!!
Meaning was: hjfs
Enter new Meaning: jehwryyw
Keyword's meaning updated!!!

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 3
Ascending order
 ewor : rmwk
 fskn : wjrr
 qfmffni : fhkqfJ
 sagar : jehwryyw
 wioj : wufjwa

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 6

        Enter the keyword to delete:- wioj
Word deleted successfully!!
        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 3
Ascending order
 ewor : rmwk
 fskn : wjrr
 qfmffni : fhkqfJ
 sagar : jehwryyw

        ------MENU------
1.Insert word
2.search word
3.Ascending order
4.Descending order
5.Update Meaning
6.Delete
7.Quit
Enter choice:- 7

        ---*/
