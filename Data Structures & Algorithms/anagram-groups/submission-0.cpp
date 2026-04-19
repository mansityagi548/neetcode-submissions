class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string , vector<string>> m1;

      for(int i = 0 ; i < strs.size() ; i++){
        string word = strs[i];
        std::sort(word.begin() , word.end());

        m1[word].push_back(strs[i]);
      }
  vector<vector<string>> vec;
      for(auto &p1 : m1){
        vec.push_back(p1.second);
      }
      return vec;
    }
};
