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

Node* insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i == 0) //For insert 0th possition
    {
        newNode ->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i-1) //If not null
    {
        temp = temp ->next;
        count ++;
    }
    if(temp != NULL)
    {
        Node *a = temp ->next;
        temp ->next = newNode;
        newNode ->next = a;
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
    cout << endl;
}

int main()
{
    Node *head = takeInput_Betterway();
    print(head);

    int i,data;
    cout << "Possition = ";
    cin >> i;
    cout << "Data = ";
    cin  >> data;
    head = insertNode(head, i, data);
    print(head);
}