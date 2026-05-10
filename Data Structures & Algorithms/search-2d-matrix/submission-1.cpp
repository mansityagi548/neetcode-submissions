class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int start = 0;
   int end = matrix.size() -1;
    int col = matrix[0].size() -1 ;
   while(start <= end){
    if(matrix[start][col] == target){
        return true;
    }else if (matrix[start][col] < target){
        start++;
    }else{
        int i = start;
        int left = 0;
        int right = col;
        while(left <= right){
            int mid = (left + right) /2;
            if(matrix[i][mid] == target){
                  return true;
            }else if (matrix[i][mid] < target) left = mid + 1;
            else  right = mid -1;
        }

        return false;
    }
   }


    return false;
    }
};
