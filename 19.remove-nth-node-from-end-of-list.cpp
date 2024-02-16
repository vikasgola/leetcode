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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tobedeleted = head, *endnode = head;
        for(int i=0;i<n;i++){
            endnode = endnode->next;
        }
        if(endnode == nullptr) return head->next;
        while(endnode->next != nullptr){
            endnode = endnode->next;
            tobedeleted = tobedeleted->next;
        }
        tobedeleted->next = tobedeleted->next->next;
        return head;
    }
};