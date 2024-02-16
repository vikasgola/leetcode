/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        while(head->next != NULL){
            if(head->val == INT_MAX) return true;
            head->val = INT_MAX;
            head = head->next;
        }
        return false;
    }
};