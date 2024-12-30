#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void tail_at(Node*head,Node*tail,int val)
{
    if(head==NULL)
    {
        Node* newnode=new Node(val);
        head=newnode;
        tail=newnode;
        return;

    }
    Node* newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int x;cin>>x;
        if(x==-1)
        {
            break;
        }
        tail_at(head,tail,x);
        

    }
    return 0;
}