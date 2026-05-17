class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          if(nums1.size()  > nums2.size()) return  findMedianSortedArrays(nums2  , nums1);

  int m = nums1.size();
  int n = nums2.size();
  int start = 0;
  int end = m;
  int half = (m+n+1) / 2;

  while(start <= end){
    int leftSide = start + (end - start) / 2;
    int leftSide2 = half - leftSide;

    int l1 = leftSide == 0 ? INT_MIN : nums1[leftSide - 1];
    int r1 = leftSide == m ? INT_MAX  : nums1[leftSide];

    int l2 = leftSide2 == 0 ? INT_MIN : nums2[leftSide2 - 1];
    int r2 = leftSide2 == n ? INT_MAX : nums2[leftSide2];

    if(l1 <= r2 && l2 <= r1){
        int maxLeft = max(l1 , l2);
        int maxRight = min(r1 , r2);


        if((m+n) % 2 != 0){
          return maxLeft;
        }else{
          return (maxLeft + maxRight) / 2.0;
        }

    }else if (l1 > r2){
         end = leftSide - 1;
    }else{
      start =  leftSide + 1;
    }

  }

 return -1;
    }
};
