/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;   
        }
        ListNode *prv = new ListNode();
        ListNode *cur = new ListNode();
        ListNode *nx = new ListNode();
        cur = head;
        //head->next = NULL;
        prv = NULL;
        while(cur->next != NULL) {
            nx = cur->next;
            cur->next = prv;
            prv = cur;
            cur = nx;
        }
        cur->next  = prv;
        return cur;
    }
};
