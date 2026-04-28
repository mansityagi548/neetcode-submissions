class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (nums.size() < k)
    return {};
  deque<int> dq;
   vector <int> ans;

   for(int i = 0 ; i < nums.size() ; i++){
       while(!dq.empty() && nums[dq.back()] < nums[i]){
        dq.pop_back();
       }

       dq.push_back(i);

       if(i >= k-1){
        if(dq.front() <= i-k){
          dq.pop_front();
        }
          ans.push_back(nums[dq.front()]);
        
       }
   }

   return ans;  
    }
};
