struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
  vector<int> inorderTraversal(TreeNode *root) {
	vector<int> result;
	if(root == NULL)
	  return result;
	vector<TreeNode *> stack;
	TreeNode * curr = root;
	while(curr != NULL){
	  stack.push_back(curr);
	  curr = curr->left;
	}

	while(stack.empty() == false){
	  curr = stack.back();
	  stack.pop_back();
	  result.push_back(curr->val);
	  if(curr->right != NULL){
		curr = curr->right;
		while(curr != NULL){
		  stack.push_back(curr);
		  curr = curr->left;
		}
	  }
	}
	return result;
  }
};
