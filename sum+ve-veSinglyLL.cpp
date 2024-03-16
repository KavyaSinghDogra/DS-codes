//Print the sum of +ve, -ve integers in a given singly linked list.
#include <iostream>
using namespace std;

// Definition for a singly linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to calculate the sum of positive and negative integers in a linked list
void sumOfPosNeg(ListNode* head, int& sumPositive, int& sumNegative) {
    ListNode* current = head;
    while (current != nullptr) {
        if (current->val > 0)
            sumPositive += current->val;
        else
            sumNegative += current->val;
        current = current->next;
    }
}

int main() {
    // Creating the linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(-2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = new ListNode(5);

    // Calculating the sum of positive and negative integers
    int sumPositive = 0;
    int sumNegative = 0;
    sumOfPosNeg(head, sumPositive, sumNegative);

    // Printing the sums
    cout << "Sum of positive integers: " << sumPositive << endl;
    cout << "Sum of negative integers: " << sumNegative << endl;

    // Deleting dynamically allocated memory
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
