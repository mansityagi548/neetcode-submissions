class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         if(nums.size() < 3) return {};
    std::sort(nums.begin() , nums.end());
    vector<vector<int>> result;
   int n = nums.size();

   // this is for so that we can check whole vector..
   for(int i = 0 ; i < n ; i++){
     if(i > 0 && nums[i] == nums[i-1]) continue; // we do this bcz again on this one numbe again we are going to check the vector so if in the previous one we did not found it it will just repeat that whole process again and if yes then it will just add the duplicates .. 
     int start = i+1;
     int end = n-1;
     while(start < end){
        int sum = nums[start] + nums[end] + nums[i];
        if(sum == 0){
         result.push_back({nums[i] , nums[start] , nums[end]});
         while(start < end && nums[start] == nums[start+1]) start++;// why we do this bcz again if it is duplicate then we are going to go through that thing again and why we do start+1 the reason is bcz we are going to work with the next one not the previous one so we have to make sure of that .. 
         while(start < end && nums[end] == nums[end-1]) end--; // again same reason as the start one has and why -1 bcz we are going to work with the before one..
         start++;
         end--;
        }else if(sum < 0){
         start++;
        }else{
         end--;
        }
     }
   }

   return result;
    }
};
