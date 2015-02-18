class Solution {
public:
  int numTrees(int n) {
	return treeBuilder(1,n);
  }

private:
  int treeBuilder(int start, int end){
	if(start >= end){
	  return 1;
	}
	int result = 0;
	for(int i = start; i <= end; i++){
	  result += treeBuilder(start, i - 1) * treeBuilder(i + 1, end);
	}
	return result;
  }
};
