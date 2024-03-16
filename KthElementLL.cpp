//Search and print the "Kth" element in a given singly linked list. K is the input along with the LL.
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to search and print the Kth element in a linked list
void printKthElement(ListNode* head, int k) {
    int count = 0;
    ListNode* current = head;
    while (current != nullptr && count < k - 1) {
        current = current->next;
        count++;
    }
    if (current == nullptr || current->next == nullptr) {
        cout << "The list does not have " << k << " elements." << endl;
    } else {
        cout << "The " << k << "th element is: " << current->next->val << endl;
    }
}

int main() {
    // Creating the linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Input for the value of K
    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    // Printing the Kth element
    printKthElement(head, k);

    // Deleting dynamically allocated memory
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
