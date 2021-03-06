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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        while(lists.size()>1){
            lists.push_back(merge2Lists(lists[0],lists[1]));
            lists.erase(lists.begin());  //erase
            lists.erase(lists.begin());
        }
        return lists[0];
    }
    
    ListNode* merge2Lists(ListNode* l1, ListNode* l2){
        if(l1==NULL) {
            return l2;
        }
        if(l2==NULL) {
            return l1;
        }
        if(l1->val<l2->val){
            l1->next=merge2Lists(l1->next,l2);  //recursive 递归
            return l1;
        }else{
            l2->next=merge2Lists(l2->next,l1);
            return l2;
        }
    }
};


//time complexity is kn(lgk), k/2(2n) + k/4(4n) + k/8*(8n)... + = logk * (kn)
