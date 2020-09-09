/*
 * Date: 09/10/2020
 * Author: jiachongliu
 * Title: 589. N-ary Tree Preorder Traversal
 * Times: 1
 */


class Node {
    public:
        int val;
        vector<Node*> children;

        Node() {}
        Node(int _val) {
            val = _val;
        }

        Node(int _val, vector<Node*> _children) {
            val = _val;
            children = _children;
        }
};

class Solution {
    public:
        vector<int> preorder(Node* root) {
            if (!root) return {};
            vector<int> ans;
            stack<Node*> s;
            s.push(root);

            while (!s.empty()) {
                const Node* node = s.top();
                s.pop();

                ans.push_back(node->val);
                for (auto it = node->children.rbegin(); it != node->children.rend(); ++it) {
                    s.push(*it);
                }
        }

            return ans;
};
