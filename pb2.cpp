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
void add_to_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int get_size(Node *head)
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

void duplicate(Node *&head)
{

    int a[105] = {0};
    Node *temp = head;
    while (temp != NULL)
    {
        a[temp->val]++;

        temp = temp->next;
    }
    int len = sizeof(a) / sizeof(a[0]); 
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] > 1)
        {
            flag = 1;
            break;
        }
    }
    cout << (flag == 1 ? "YES" : "NO") << endl;
}

// void print_link(Node *head)
// {
//     Node *temp = head;
//    while (temp != NULL)
//     {
//         cout << temp->val<<endl;
//         temp = temp->next;
//     }
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;

        cin >> val;
        if (val == -1)
        {
            break;
        }
        add_to_tail(head, tail, val);
    }
    // print_link(head);
    duplicate(head);

    return 0;
}