class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
           int minSpeed = INT_MAX;
    int start = 1;
   int maxNum = 0;
   for(int x : piles){
    maxNum = max(maxNum , x);
   } 



   while(start <= maxNum){
      int mid = start + (maxNum - start) / 2;
      long long int s = 0;

      for(int pile : piles){
        s += ceil((double)pile / mid);
      }
      

      if(s <= h){
        minSpeed = min(minSpeed , mid);
        maxNum = mid-1;
      }else{
        start = mid + 1;
      }
   }

   return minSpeed;   
    }
};
