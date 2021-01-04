/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<TreeNode*> ans;
        
        if(N < 1 || N % 2 == 0) {
            return ans;
        }
        
        for(int k = 2; k < N; k += 2) {
            
            vector<TreeNode*> v1 = allPossibleFBT(k - 1);
            vector<TreeNode*> v2 = allPossibleFBT(N - k);
            
            int n1 = v1.size(), n2 = v2.size();
            
            for(int i = 0; i < n1; i++) {
                for(int j = 0; j < n2; j++) {
                    TreeNode* newRoot = new TreeNode(0);
                    newRoot->left = v1[i];
                    newRoot->right = v2[j];
                    ans.push_back(newRoot);
                }
            }
        }
        
        if(ans.empty()) {
​
            ans.push_back(new TreeNode(0));
        }
        
        return ans;
    }
};
