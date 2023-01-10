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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* curr1 = head->next;
        ListNode* curr2 = head;
        while (curr1 != nullptr){
            curr1->val += curr2->val;
            curr2->val = curr1->val - curr2->val;
            curr1->val -= curr2->val;
            if (curr1->next == nullptr)
                return head;
            curr1 = curr1->next->next;
            curr2 = curr2->next->next;
        }
        return head;
    }
};
