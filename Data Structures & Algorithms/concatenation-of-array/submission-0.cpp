class Solution {
public:

      vector<int> getConcatenation(vector<int>& nums){
  vector<int> concat;
  for(int x : nums){
    concat.push_back(x);
  }

  for(int y : nums){
    concat.push_back(y);
  }

 return concat;
        
}

};