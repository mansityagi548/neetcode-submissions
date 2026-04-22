class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         if(nums.size() < 3) return {};
   vector <vector<int>> result;

   std::sort(nums.begin() , nums.end());
   int n = nums.size();
   for(int i = 0 ; i < n ; i++){
      if (i > 0 && nums[i] == nums[i-1]) continue;
      int start = i+1;
      int end = n-1;
      while(start < end){
         if(nums[i] + nums[start] + nums[end] == 0){
            result.push_back({nums[i] , nums[start] , nums[end] });
            while (start < end && nums[start] == nums[start+1]) start++;
            while (start < end && nums[end] == nums[end-1]) end--;
            start++;
            end--;
         }else if(nums[i] + nums[start] + nums[end] < 0){
            start++;
         }else{
            end--;
         }

      }
   }
   return result;
    }
};

