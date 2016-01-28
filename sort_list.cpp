/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//merge sort
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *f = head->next, *s = head; //make sure f and s are different
        //find the middle, and split the list
        while(f!=NULL&&f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        ListNode* head2 = sortList(s->next);
        s->next=NULL;
        head = sortList(head);
        return merge(head, head2);
    }
    
    ListNode* merge(ListNode *h1, ListNode *h2){
        ListNode *result = new ListNode(1);
        ListNode *cur = result;
        while(h1!=NULL&&h2!=NULL){
            if(h1->val < h2->val){
                cur->next=h1;
                h1=h1->next;
            }else{
                cur->next=h2;
                h2=h2->next;
            }
            cur = cur->next;
        }
        
        if(h1!=NULL)
            cur->next = h1;
        
        if(h2!=NULL)
            cur->next = h2;
        
        return result->next;
    }
};
