/**
 * Definition of singly-linked-list:
 *
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
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        if(head == NULL)
            return NULL;
        ListNode *pre = nullptr;
        ListNode *p = head;
        ListNode *reverse_head = nullptr;

        while(p)
        {
            ListNode *next = p->next;
            if(p->next == NULL)
                reverse_head = p;
            p -> next = pre;
            pre = p;
            p = next;
        }
        return reverse_head;
    }
};