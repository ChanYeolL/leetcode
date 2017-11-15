/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* change(ListNode* head , ListNode* end){
        ListNode* heigh = head ; 
        ListNode* low = head ;
        
        if(head == end){
            return NULL ;
        }
        
        while(heigh!=end && heigh->next !=end){
            heigh = heigh->next->next ;
            low = low->next ; 
        }
        
        TreeNode* tree = new TreeNode(low->val) ;
        tree->left = change(head , low) ;
        tree->right = change(low->next , end) ;
        
        return tree ;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL){
            return NULL ;
        }
        
        TreeNode* tn = change(head , NULL) ;
        
        return tn ;
    }
};
