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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = NULL ;
        
        while(head){
            ListNode* ne = head->next ;
            head->next = temp ;
            temp = head ;
            head = ne ;
        }
        
        return temp ;
    }
};
