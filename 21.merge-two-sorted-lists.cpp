/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!(l1 && l2)) return l1 ? l1 : l2;
        ListNode* m = l1->val < l2->val ? l1 : l2;
        ListNode* mnext = m;
        if(m == l1)
            l1 = l1->next;
        else
            l2 = l2->next;
        while(l1 || l2){
            if(l1 && (!l2 || l1->val < l2->val)){
                mnext->next = l1;
                mnext = mnext->next;
                l1 = l1->next;
            }else{
                mnext->next = l2;
                mnext = mnext->next;
                l2 = l2->next;
            }
        }
        return m;
    }
};
// @lc code=end

