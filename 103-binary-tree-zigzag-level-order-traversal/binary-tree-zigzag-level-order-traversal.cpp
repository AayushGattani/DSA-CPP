class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {

            int size = q.size();
            vector<int> level(size);

            // We need a separate index because size is decreasing
            int i = 0;

            while (size--) {

                TreeNode* node = q.front();
                q.pop();

                // Decide position
                int index;

                if (leftToRight)
                    index = i;
                else
                    index = level.size() - 1 - i;

                level[index] = node->val;

                // Normal level order traversal
                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);

                i++;
            }

            ans.push_back(level);

            // Reverse direction for next level
            leftToRight = !leftToRight;
        }

        return ans;
    }
};