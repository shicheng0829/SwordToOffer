class Solution {
public:
    /**
     * @param inorder: A list of integers that inorder traversal of a tree
     * @param postorder: A list of integers that postorder traversal of a tree
     * @return: Root of a tree
     */

    typedef vector<int>::iterator Iter;

    TreeNode *createTree(Iter infirst,Iter inlast,Iter prefirst, Iter prelast)
    {
        if(infirst == inlast)
            return NULL;
        Iter inroot = find(infirst,inlast,*prefirst);
        TreeNode * root = new TreeNode;
        root -> val = *prefirst;
        int leftlen = inroot - infirst;
        root -> left = createTree(infirst, inroot,prefirst + 1,prefirst + leftlen + 1 );
        root -> right = createTree( inroot + 1, inlast,prefirst + leftlen + 1,prelast);
        return root;
    }
    TreeNode * buildTree(vector<int> &preorder, vector<int> &inorder) {
        // write your code here
        return createTree(inorder.begin(), inorder.end(), preorder.begin(),preorder.end());
    }

    
};