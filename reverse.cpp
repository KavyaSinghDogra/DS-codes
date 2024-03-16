//Reverse a given Linked in groups of K elements.
        //Input: 1->2->3->4->5 and k=2
        //Output: 2->1->4->3->5

/*iterative
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list in groups of K elements
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* current = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    int count = 0;

    // Counting the number of nodes in the list
    ListNode* temp = head;
    int length = 0;
    while (temp) {
        temp = temp->next;
        length++;
    }

    // Reversing groups of K elements
    if (length < k)
        return head;

    while (current != nullptr && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != nullptr) {
        head->next = reverseKGroup(next, k);
    }

    return prev;
}

// Function to print the linked list
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

    int k = 2;

    // Reversing the linked list in groups of K elements
    ListNode* newHead = reverseKGroup(head, k);

    // Printing the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(newHead);

    // Deleting dynamically allocated memory
    ListNode* current = newHead;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
*/

/*Recursive approach
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list in groups of K elements
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* current = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    int count = 0;

    // Counting the number of nodes in the list
    ListNode* temp = head;
    int length = 0;
    while (temp) {
        temp = temp->next;
        length++;
    }

    // Reversing groups of K elements
    if (length < k)
        return head;

    while (current != nullptr && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != nullptr) {
        head->next = reverseKGroup(next, k);
    }

    return prev;
}

// Function to print the linked list
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

    int k = 2;

    // Reversing the linked list in groups of K elements
    ListNode* newHead = reverseKGroup(head, k);

    // Printing the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(newHead);

    // Deleting dynamically allocated memory
    ListNode* current = newHead;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
*/