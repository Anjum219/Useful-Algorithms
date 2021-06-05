#include <bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class traversal{
public:
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;

    void preorder_traverse( TreeNode * root ){
        if( root == NULL )
            return;
        preorder.push_back(root->val);
        preorder_traverse( root->left );
        preorder_traverse( root->right );
    }

    void inorder_traverse( TreeNode * root ){
        if( root == NULL )
            return;

        inorder_traverse( root->left );
        inorder.push_back(root->val);
        inorder_traverse( root->right );
    }

    void postorder_traverse( TreeNode * root ){
        if( root == NULL )
            return;

        postorder_traverse( root->left );
        postorder_traverse( root->right );
        postorder.push_back(root->val);
    }

    vector<int> get_preorder( TreeNode * root ) {
        preorder.clear();
        preorder_traverse(root);
        return preorder;
    }

    vector<int> get_inorder( TreeNode * root ) {
        inorder.clear();
        inorder_traverse(root);
        return inorder;
    }

    vector<int> get_postorder( TreeNode * root ) {
        postorder.clear();
        postorder_traverse(root);
        return postorder;
    }
};

int main(){
    struct TreeNode * l = new TreeNode(1);
    struct TreeNode * r = new TreeNode(9);
    struct TreeNode * t = new TreeNode(2, l, r);

    traversal trav;
    vector<int> orders;

    orders = trav.get_preorder(t);
    for( int i = 0; i < orders.size(); i++ ){
        cout<<orders[i]<<' ';
    }
    cout<<endl;
    orders.clear();

    orders = trav.get_inorder(t);
    for( int i = 0; i < orders.size(); i++ ){
        cout<<orders[i]<<' ';
    }
    cout<<endl;
    orders.clear();

    orders = trav.get_postorder(t);
    for( int i = 0; i < orders.size(); i++ ){
        cout<<orders[i]<<' ';
    }
    cout<<endl;
    orders.clear();

    return 0;
}
