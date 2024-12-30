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
void middle_value(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    // Node*temp=head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int size_at(Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        middle_value(head, tail, val);
    }
    int sz = size_at(head);
    {
        Node *temp = head;
        int index=(sz/2);

        for(int i=1; i<index; i++)
        {
            temp=temp->next;
        }

        if(sz%2!=0)
        {
            cout<<temp->next->val;
        }
        else
        {
            cout<<temp->val<<" "<<temp->next->val;
        }
      
    }
    return 0;
}