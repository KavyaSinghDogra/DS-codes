//Reverse a given Linked List. "both iterative and recursive approach".
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list (recursive approach)
ListNode* reverseLinkedListRecursive(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* newHead = reverseLinkedListRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
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

    // Reversing the linked list using recursive approach
    head = reverseLinkedListRecursive(head);

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
