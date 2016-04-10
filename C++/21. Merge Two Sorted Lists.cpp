/*
Merge two sorted linked lists and return it as a new list. The new list should be made by 
splicing together the nodes of the first two lists.
Subscribe to see which companies asked this question
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //solution1
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* out;
        if(l1->val<= l2->val) {out=l1;l1=l1->next;}
        else {out=l2;l2=l2->next;}
        ListNode* temp=out;
        while(l1!=NULL&&l2!=NULL)
        {
            if( l1->val<= l2->val) 
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1==NULL) temp->next=l2;
        else temp->next=l1;
        return out;
    }
};
//solution2
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        if(l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};