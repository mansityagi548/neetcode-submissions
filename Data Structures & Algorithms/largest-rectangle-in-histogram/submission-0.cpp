class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.size() < 2) return heights[0];
    int n = heights.size();
    vector<int> right(n);
    vector<int> left(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--){
        while (!st.empty() && heights[st.top()] >= heights[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            right[i] = n;
        }
        else
        {
            right[i] = st.top();
        }
        st.push(i);
    }

    while (!st.empty())
        st.pop();

    for (int i = 0; i < n; i++){
        while (!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }

        if (st.empty()){
            left[i] = -1;
        }
        else{
            left[i] = st.top();
        }

        st.push(i);
    }


    int maxArea = 0;
    for (int i = 0; i < n; i++){
        int width = right[i] - left[i] - 1;
        maxArea = max(maxArea, heights[i] * width);
    }
    return maxArea;
    }
};
