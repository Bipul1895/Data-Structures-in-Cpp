#include <bits/stdc++.h>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {

    }
};

void levelOrderTraversal(TreeNode* root) {
    if(root == nullptr) {
        cout << "BinaryTree is null\n";
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    cout << "level order traversal : ";
    while(!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if(curr->left != nullptr) q.push(curr->left);
        if(curr->right != nullptr) q.push(curr->right);

    }
    cout << "\n";
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n=7;

    queue<TreeNode*> q;
    int i=0;
    TreeNode* root = new TreeNode(arr[i]);

    q.push(root);

    while(!q.empty()) {
        TreeNode* par = q.front();
        q.pop();

        int idx_lchild=2*i + 1;
        int idx_rchild=2*i + 2;

        if(idx_lchild < n) {
            TreeNode* l_child = new TreeNode(arr[idx_lchild]);
            par->left = l_child;
            q.push(l_child);
        }
        if(idx_rchild < n) {
            TreeNode* r_child = new TreeNode(arr[idx_rchild]);
            par->right = r_child;
            q.push(r_child);
        }
    }

    levelOrderTraversal(root);


}
