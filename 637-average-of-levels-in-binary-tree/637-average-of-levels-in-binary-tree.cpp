/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
map<int,vector<int>>level;
void helper(TreeNode* root,int i){
    if(root==NULL)return ;
    level[i].push_back(root->val);
    helper(root->left,i+1);
    helper(root->right,i+1);
    
}


class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        level.clear();
        helper(root,0);
        vector<double>ans;
        for(auto x:level){
            int i=x.first;
            vector<int>j=x.second;
            
            double sum=0;
            for(auto y:j){
                sum+=(1.0*y);
            }
            sum=sum/(j.size()*(1.0));
            ans.push_back(sum);
            
        }
        return ans;
        
    }
};