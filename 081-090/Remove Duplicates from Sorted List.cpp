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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode *current = head;
        while(current && current -> next)
        {
            if(current -> val == (current -> next) -> val)
            {
                ListNode *temp = current -> next ;
                current -> next = temp -> next;
                delete temp;
            }
            else
                current = current -> next;

        }
        return head;
    }
};
