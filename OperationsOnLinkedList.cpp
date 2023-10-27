#include <iostream>
#include <bitset>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

Node* head = NULL;  

void disp()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << "Data: " << temp->data << "\nSelf address: " << temp << "\nNext address: " << temp->next << endl;
        temp = temp->next;
        cout<<endl;
    }
}

void insertAtBeginning(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
}

int main()
{
    Node* newNode1 = new Node;
    newNode1->data = 20;

    Node* newNode2 = new Node;
    newNode2->data = 30;

    Node* newNode3 = new Node;
    newNode3->data = 40;

    Node* newNode4 = new Node;
    newNode4->data = 50;

    newNode1->next = newNode2;
    newNode2->next = newNode3;
    newNode3->next = newNode4;

    cout << "Printing through loop" << endl;

    head = newNode1;

    disp();
    insertAtBeginning(10);  
    disp();
    insertAtEnd(60);
    disp();

    return 0;
}