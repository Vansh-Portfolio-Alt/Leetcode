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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode* t1 =new ListNode(-1),*head=t1;
        while (l1 || l2 || c){
            if(l1){
                c+=l1->val;
                l1=l1->next;
            }if(l2){
                c+=l2->val;
                l2=l2->next;
            }
            t1->next=new ListNode(c%10);
            c/=10;
            t1=t1->next;
        }
        return head->next;
    }
};