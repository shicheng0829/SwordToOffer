/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param T1: The roots of binary tree T1.
     * @param T2: The roots of binary tree T2.
     * @return: True if T2 is a subtree of T1, or false.
     */
    bool isSubtree(TreeNode * T1, TreeNode * T2) {
        // write your code here
        bool result = false;
        if(T2 == NULL)
            return true;
        if(T1 != NULL && T2 != NULL)
        {
            if(T1 -> val == T2 -> val)
                result = DoesTree1HaveTree2(T1,T2);
            if(!result)
                result = isSubtree(T1->left, T2);
            if(!result)
                result = isSubtree(T1->right, T2);
        }
        return result;
    }
    bool DoesTree1HaveTree2(TreeNode * T1, TreeNode * T2)
    {
        if(T1 == NULL && T2 == NULL)
            return true;
        if(T1 == NULL && T2 != NULL)
            return false;
        if(T1 != NULL && T2 == NULL)
            return false;
        if(T1->val != T2->val)
            return false;

        return DoesTree1HaveTree2(T1->left,T2->left) && DoesTree1HaveTree2(T1->right,T2->right);
    }
};