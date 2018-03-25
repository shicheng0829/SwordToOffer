/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;
        ListNode* mergeHead = nullptr;
        if(l1->val < l2->val)
        {
            mergeHead = l1;
            mergeHead->next = mergeTwoLists(l1->next,l2);
        }else
        {  
            mergeHead = l2;
            mergeHead->next = mergeTwoLists(l1,l2->next);
        }
        return mergeHead;
    }
};