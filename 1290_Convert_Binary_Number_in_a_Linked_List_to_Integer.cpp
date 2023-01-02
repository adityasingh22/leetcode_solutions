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
    int getDecimalValue(ListNode* head, int& count){
        if (head==nullptr)
            return 0;
        count++;
        return getDecimalValue(head->next, count);
    }
    

    int getDecimalValue(ListNode* head) {
        int count=0, res=0;
        getDecimalValue(head, count);
        count--;
        while (head!=nullptr){
            if (head->val==1)
                res+=pow(2, count);
            count--;
            head=head->next;
        }
        return res;
    }
};
