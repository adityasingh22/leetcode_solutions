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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if (fast==NULL)
                return slow;
        }
        return slow;
    }
};
