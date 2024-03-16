//Reverse a given Linked List. "both iterative and recursive approach".
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list (iterative approach)
ListNode* reverseLinkedListIterative(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;
    
    while (current != nullptr) {
        next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current; // Move pointers one position ahead
        current = next;
    }
    return prev; // New head of the reversed list
}

// Function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Creating the linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Printing original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reversing the linked list using iterative approach
    head = reverseLinkedListIterative(head);

    // Printing reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    // Deleting dynamically allocated memory
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
