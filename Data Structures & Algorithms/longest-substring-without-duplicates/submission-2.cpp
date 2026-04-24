class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int left = 0;
    int maxLength = 0;
    unordered_map<char , int> m1;
    for(int i = 0 ; i < s.length() ; i++){
        if(m1.find(s[i]) != m1.end()){
          left = max(left, m1[s[i]] + 1);
        }
        m1[s[i]] = i;
       maxLength = max(maxLength , i - left + 1);
    }

    return maxLength;
    }
};
