#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n, val;

    cout << "How many nodes do you want to insert? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;

        Node* newNode = new Node();
        newNode->data = val;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    cout << "Forward traversal: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    cout << "Backward traversal: ";
    temp = tail;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";

    return 0;
}
