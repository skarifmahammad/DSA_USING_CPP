#include <iostream>
using namespace std;
#include "Node.cpp"

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
    /*
    //Statically
    Node n1(3);
    Node *head = &n1;

    Node n2(6);
    n1.next = &n2;

    cout << "n1 = " << n1.data << " " << endl << "n2 = " << n2.data << endl;
    cout << "head = " << head->data;
    */

    /*
    //Dynamically
    Node *n3 = new Node(10);
    Node *head = n3;
    */

    //Statically
    Node n1(4);
    Node *head = &n1;

    Node n2(7);
    Node n3(3);
    Node n4(8);
    Node n5(2);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    // print(&n3);
    // print(head); //Print twice
}