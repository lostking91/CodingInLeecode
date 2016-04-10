/*
Remove all elements from a linked list of integers that have value val.
Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://leetcode.com/discuss/47642/simple-and-elegant-solution-in-c
//https://leetcode.com/discuss/42141/32ms-c-ac-solution
//solution1
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
            head = head->next;
        }
        if(head == NULL) {
            return head;
        }
        ListNode* temp=head;
        while(temp->next)
        {
            if(temp->next->val==val)
            {
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
            
        }
        return head;
    }
};
//solution2
public ListNode removeElements(ListNode head, int val) {
        if (head == null) return null;
        head.next = removeElements(head.next, val);
        return head.val == val ? head.next : head;
}