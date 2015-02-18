struct TreeNode {
  int
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
	  vector<int> result;
	  if(root == NULL) return result;
	  vector<TreeNode *> stack;
	  stack.push_back(root);
	  while(stack.empty() == false){
		TreeNode *cur = stack.back();
		result.push_back(cur->val);
		stack.pop_back();
		if(cur->right)
		  stack.push_back(cur->right);
		if(cur->left)
		  stack.push_back(cur->left);
	  }
	  return result;
    }
};
