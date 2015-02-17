class Solution {
public:
    int titleToNumber(string s) {
	  char * carr = new char[s.size() + 1];
	  strcpy(carr,s.c_str());
	  int result = 0;
	  for(int i = 0; i < s.size(); i++){
		result += (carr[i] - 64) * pow(26,(s.size() - 1 - i));
	  }
	  delete[] carr;
	  return result;
    }
};
