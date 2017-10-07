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
    
    int sum = 0 ;
    int addall(TreeNode* root){
          if(root == NULL){
            return 0 ;
        }
        
        int numl=0,numr=0 ;
        
        if(root->left){
           numl = addall(root->left) ;
        }  
        
      //  cout<<numl <<endl ;
        
        if(root->right){
           numr = addall(root->right) ;
        }
        // suml+=root->val ;
        // sumr+=root->val ;
       // cout<<numr <<endl ;
        
        sum+= abs(numl-numr) ;
        
        return numl+numr+root->val ;
    }
    
    
    int findTilt(TreeNode* root) {
        addall(root) ;
        
        return sum ;
        
    }
};
