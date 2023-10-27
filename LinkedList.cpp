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
        next = nullptr;
    }
};

Node* head = nullptr;  // Initialize head to nullptr

void disp()
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << "Data: " << temp->data << "\nSelf address: " << temp << "\nNext address: " << temp->next << endl;
        temp = temp->next;
    }
}

void insertAtBeginning(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node* newNode1 = new Node;
    newNode1->data = 10;

    Node* newNode2 = new Node;
    newNode2->data = 20;

    Node* newNode3 = new Node;
    newNode3->data = 30;

    Node* newNode4 = new Node;
    newNode4->data = 40;

    newNode1->next = newNode2;
    newNode2->next = newNode3;
    newNode3->next = newNode4;

    cout << "Printing through loop" << endl;

    head = newNode1;

    disp();
    insertAtBeginning(5);  // Example usage of insertAtBeginning()
    disp();

    return 0;
}
