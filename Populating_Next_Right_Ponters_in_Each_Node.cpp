struct TreeLinkNode {
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
  void connect(TreeLinkNode *root) {
	if(root == NULL) return;
	queue<TreeLinkNode *> que;
	que.push(root);
	que.push(NULL);
	while(!que.empty()){
	  TreeLinkNode * curr = que.front();
	  que.pop();
	  if(curr == NULL){
		if(que.empty())
		  return;
		que.push(curr);
	  }
	  else{
		curr->next = que.front();
		if(curr->left != NULL)
		  que.push(curr->left);
		if(curr->right != NULL)
		  que.push(curr->right);
	  }
	}
  }
};
