//creation of a binary tree and counting leaf nodes
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} //constructor
};

// Function to count leaf nodes in a binary tree
int countLeafNodes(TreeNode* root) {
    if (root == nullptr) // If tree is empty
        return 0;
    if (root->left == nullptr && root->right == nullptr) // If node is a leaf
        return 1;
    // Recursive call for left and right subtrees
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    // Creating the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Counting the leaf nodes
    int leafCount = countLeafNodes(root);
    cout << "Number of leaf nodes: " << leafCount << endl;

    // Deleting dynamically allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
