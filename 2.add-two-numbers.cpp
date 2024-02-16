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

    ListNode* _addTwoNumbers(ListNode* l1, ListNode* l2, int carry) {
        int s = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        ListNode *sum = new ListNode();
        sum->val = s%10;
        if((l1 && l1->next) || (l2 && l2->next) || (s/10 != 0)){
            sum->next = _addTwoNumbers(l1 ? l1->next : NULL, l2 ? l2->next : NULL, s/10);
        }else{
            sum->next = NULL;
        }
        return sum;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return _addTwoNumbers(l1, l2, 0);
    }
};