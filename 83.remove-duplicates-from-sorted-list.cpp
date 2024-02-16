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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* backup = head;
        ListNode* curr = head;
        head = head->next;
        while(head){
            if(curr->val == head->val){
                curr->next = head->next;
                head = head->next;
            }else{
                curr = curr->next;
                head = head->next;
            }
        }
        return backup;
    }
};