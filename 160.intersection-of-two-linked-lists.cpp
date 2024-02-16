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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0, len2=0;
        ListNode *temp;
        temp = headA;
        while(headA){
            len1++;
            headA = headA->next;
        }
        headA = temp;
        temp = headB;
        while(headB){
            len2++;
            headB = headB->next;
        }
        headB = temp;

        if(len1 > len2){
            while(len1 != len2){
                len1--; headA = headA->next;
            }
        }else{
            while(len1 != len2){
                len2--; headB = headB->next;
            }
        }

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};