/*
Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:
A:          a1 ¡ú a2
                   ¨K
                     c1 ¡ú c2 ¡ú c3
                   ¨J            
B:     b1 ¡ú b2 ¡ú b3
begin to intersect at node c1.
*/
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
        if(!headA||!headB) return NULL;
        ListNode *pA=headA;
        ListNode *pB=headB;
        int lenA=0;int lenB=0;
        while (pA) {++lenA;  pA = pA->next; }
        while (pB) {++lenB;  pB = pB->next; }
        while(lenA>lenB) {headA = headA->next; --lenA;}
        while(lenA<lenB) {headB = headB->next; --lenB;}
        while(headA && headB)
        {
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};