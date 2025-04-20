#include <iostream>
struct Node {
    int data;
    Node* next;
};
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}
Node* deleteNode(Node* head, int key) {
    if (head == nullptr) {
        return nullptr; // List is empty, nothing to delete
    }
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != key) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    return head;
}
int main() {
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    std::cout << "Original Linked List:" << std::endl;
    display(head); // Output: 1 -> 2 -> 3 -> 4 -> nullptr

    head = deleteNode(head, 3);

    std::cout << "Linked List after deleting 3:" << std::endl;
    display(head); // Output: 1 -> 2 -> 4 -> nullptr

    return 0;
}
