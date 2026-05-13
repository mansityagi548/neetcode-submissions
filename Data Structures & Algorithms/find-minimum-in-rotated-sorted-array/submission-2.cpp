class Solution {
public:
    int findMin(vector<int> &nums) {
           int start = 0;
   int end = nums.size() -1;
   int minVal = INT_MAX;
   while(start <= end){
    int mid = start + (end - start) / 2;
      if (nums[mid] >= nums[start] && nums[mid] > nums[end]){
           int i = start;
           int j = mid;
           while(i <= j){
               int middle = i + (j - i) / 2;

            if(nums[middle] >= nums[i] && nums[middle] <= nums[j]){
                minVal = min(minVal , nums[i]);
                j = middle-1;
            }
           }

           start = mid + 1;
       }else{
          int i = mid;
          int j = end;
          while(i <= j){
            int middle = i + (j - i ) / 2;
            if(nums[middle] >= nums[i] && nums[middle] <= nums[end]){
                 minVal = min(minVal , nums[i]);
                j = middle-1;
            }
          }

          end = mid -1;

       }
   }

   return minVal;
    }

};
