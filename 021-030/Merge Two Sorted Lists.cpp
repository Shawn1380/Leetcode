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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* c = res;
        while(l1 != NULL || l2 != NULL){
            if (l1 == NULL) {
                c -> next = l2;
                break;
            } else if(l2 == NULL) {
                c -> next = l1;
                break;
            }
            if(l1 -> val < l2 -> val){
                c -> next = l1;
                c = c -> next;
                l1 = l1 -> next;
            }
            else{
                c -> next = l2;
                c = c -> next;
                l2 = l2 -> next;
            }
        }
        return res -> next;
    }
};
