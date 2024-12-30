#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void input_at(Node* &head,Node*&tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
       head=newnode;
       tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_revers(Node*head)
{
    Node*temp=head;
    int flag=0;
    while(temp->next!=NULL) //(tmp!=NULL)
    {
        if(temp->val>temp->next->val)
        {
            flag++;
            break;
        }
        temp=temp->next;

    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES";
    }
     

}

// void print_list(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if(x==-1)
        {
            break; 
        }
        input_at(head,tail,x);


    }
    print_revers(head);
    return 0;
}