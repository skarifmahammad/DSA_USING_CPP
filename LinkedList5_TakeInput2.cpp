#include <iostream>
using namespace std;
#include "Node.cpp"

Node *takeInput_Betterway() //Time Complexcity = O(n);
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail ->next = newNode;
            tail = tail ->next; //Or --> tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL) //head ->next != NULL --> For ignore last node data;
    {
        cout << head ->data << " ";
        head = head ->next;
    }
}

int main()
{
    Node *head = takeInput_Betterway();
    print(head);
}