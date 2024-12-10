class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr)
            return {};

        vector<vector<int>> ordered;
        queue<TreeNode*> myList;
        myList.push(root);

        while(!myList.empty()){
            vector<int> currLevel;
            int size = myList.size();
            for(int i = 0; i < size; i++){
                TreeNode* curr = myList.front();
                currLevel.push_back(curr->val);
                if(curr->left != nullptr)
                    myList.push(curr->left);
                if(curr->right != nullptr)
                    myList.push(curr->right);
                myList.pop();
            }
            ordered.push_back(currLevel);
        }
        return ordered;
    }
};
