class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.empty())
      return 0;

   unordered_set<int> s(nums.begin() , nums.end());
   int longestStreak = 0;

   for(int num : s){
      if(s.find(num-1) == s.end()){
         int currentNum = num;
         int currentStreak = 1;

         while(s.find(currentNum + 1) != s.end()){
               currentNum++;
               currentStreak++;
         }

         longestStreak = std::max(longestStreak , currentStreak);
      }
   }

   return longestStreak;
        
    }
};
