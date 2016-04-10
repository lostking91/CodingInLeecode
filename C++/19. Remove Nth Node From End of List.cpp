/*
Given a linked list, remove the nth node from the end of list and return its head.
For example,
   Given linked list: 1->2->3->4->5, and n = 2.
   After removing the second node from the end, the linked list becomes 1->2->3->5.
*/
// https://leetcode.com/discuss/16936/my-short-c-solution
// https://leetcode.com/discuss/55868/simple-one-pass-4ms-c-implementation
//solution1
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode realHead(0);
        realHead.next=head;
        head=&realHead;
        ListNode *curr=&realHead;
        while(n-->0)
            curr=curr->next;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            head=head->next;
        }
        head->next=head->next->next;
        return realHead.next;
    }
};