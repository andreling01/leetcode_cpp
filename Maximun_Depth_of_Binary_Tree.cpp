struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
	  return maxDepthHelp(root);
    }

private:
  int maxDepthHelp(TreeNode *root) {
	if(root == NULL)
	  return 0;
	if(root->left == NULL && root->right == NULL){
	  return 1;
	}
	return 1 + max(maxDepthHelp(root->left),maxDepthHelp(root->right));
  }
};
