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
    ListNode* mergeTwoLists(ListNode* l1,ListNode* l2) {
        ListNode d(0);
        ListNode* t=&d;
        while(l1 && l2) {
            if(l1->val <= l2->val) {
                t->next=l1;
                l1=l1->next;
            }
            else{
                t->next=l2;
                l2=l2->next;
            }
            t=t->next;
        }
        if(l1){
            t->next=l1;
        }
        else{
            t->next=l2;
        }
        return d.next;
    }
};
