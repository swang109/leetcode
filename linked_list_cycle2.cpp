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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode *slow=head, *fast = head->next, *slow2=head;
        while(fast&&fast->next){
            if(slow->val==fast->val){
                slow=slow->next;
                while(slow2!=slow){
                    slow2=slow2->next;
                    slow=slow->next;
                }
                return slow;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return NULL;
    }
};
