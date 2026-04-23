class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
    int end = heights.size() - 1;
    int longest = 0;
    while (start < end){
        int water = min(heights[start], heights[end]);
        int height = water * (end - start);

        longest = max(height, longest);

        if (heights[start] < heights[end]){
            start++;
        }else if (heights[start] == heights[end]){
            start++;
            end--;
        }else{
            end--;
        }
    }

    return longest;
    }
};
