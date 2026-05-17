class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if(strs.empty())  return "";
  string prefix = "";
  for(int i = 0 ; i < strs[0].length() ; i++){
     char ch = strs[0][i];
     for(int k = 1 ; k < strs.size() ; k++){
        if(i >= strs[k].length() || strs[k][i]  != ch){
          return prefix;
        }
     }

     prefix += ch;
  }

  return prefix;
    }
};