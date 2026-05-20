class Solution {
public:
    int majorityElement(vector<int>& nums) {
         std::sort(nums.begin() , nums.end());
  int n = nums.size();
  int candidate = 0;
  int count = 0;
  for(int i = 0 ; i < nums.size() ; i++){
     if(nums[i] == nums[candidate]){
      count++;
     }else{
       if(count > (n/2)) return nums[candidate];
       else{
         count = 1;
         candidate = i;
       }
     }
  }
  

  return nums[candidate]; 
    }
};