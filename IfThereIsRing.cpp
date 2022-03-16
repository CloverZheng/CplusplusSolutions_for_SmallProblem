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
    bool hasCycle(ListNode *head) {
        if(head){
            ListNode* slow = head;
            ListNode* fast = head;
            while(fast=fast->next){
                if(fast=fast->next){
                    slow = slow->next;
                    if(slow==fast) return true;
                }
                else return false;
                
            }
        }
        return false;
    }
};
