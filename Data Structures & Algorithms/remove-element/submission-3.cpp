class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         if(nums.empty())  return 0;
  int start = 0;
  int end = nums.size() -1;
  while(start <= end){
    if(nums[start] != val){
      start++;
    }else if(nums[start] == val){
      std::swap(nums[start] , nums[end]);
      end--;
    }
  }

  return start;
  
    }
};