#include <iostream>
#include "Node.cpp"

using namespace std;

Node *appendMNode(Node *head, int M)
{
    // write code here
    Node *temp = head, *t = head;
    int i = -M;
    while (temp->next != NULL)
    {
        if (i >= 0)
        {
            t = t->next;
        }
        temp = temp->next;
        i++;
    }
    temp->next = head;
    head = t->next;
    t->next = NULL;
    return head;
}

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int T;
    cout << "Enter test case : ";
    cin >> T;
    Node *head = NULL;
    while (T--)
    {
        int M;
        head = takeInput();
        cout << "Append From : ";
        cin >> M;
        print(head);

        head = appendMNode(head, M);
        print(head);
    }
}