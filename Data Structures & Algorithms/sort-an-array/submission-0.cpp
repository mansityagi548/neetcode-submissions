class Solution {
   public:
    void mergeing(vector<int>& vec, int start, int mid, int end) {
        vector<int> temp;
        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end) {
            if (vec[i] < vec[j]) {
                temp.push_back(vec[i]);
                i++;
            } else {
                temp.push_back(vec[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(vec[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(vec[j]);
            j++;
        }
        for (int k = start; k <= end; k++) {
            vec[k] = temp[k - start];
        }
    }

    void mergeSort(vector<int>& vec, int start, int end) {
        if (start >= end) return;
        int half = start + (end - start) / 2;
        mergeSort(vec, start, half);
        mergeSort(vec, half + 1, end);
        mergeing(vec, start, half, end);
    }

    vector<int> sortArray(vector<int>& nums) {
         mergeSort(nums , 0 , nums.size() - 1);
       return nums;
    }
};