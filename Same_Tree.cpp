struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
	  return isSameTreeHelp(p,q);
    }

private:
  bool isSameTreeHelp(TreeNode *p, TreeNode *q){
	if(p == NULL && q == NULL)
	  return true;
    if(p == NULL || q == NULL)
	  return false;

	return (p->val == q->val) && isSameTreeHelp(p->left,q->left) && isSameTreeHelp(p->right,q->right);
  }
};
