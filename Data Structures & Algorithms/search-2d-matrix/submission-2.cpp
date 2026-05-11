class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
   int end = matrix.size() -1;
    int col = matrix[0].size() -1 ;
   while(start <= end){
    int middle = (start + end) / 2;
    if(matrix[middle][col] == target){
        return true;
    }else if (matrix[middle][col] < target){
        start = middle + 1;
    }else if(matrix[middle][0] > target){
          end = middle - 1;
    }else{
        int left = 0;
        int right = col;
        while(left <= right){
            int mid = (left + right) /2;
            if(matrix[middle][mid] == target){
                  return true;
            }else if (matrix[middle][mid] < target) left = mid + 1;
            else  right = mid -1;
        }

        return false;
    }
   }
    return false;
    }
};
