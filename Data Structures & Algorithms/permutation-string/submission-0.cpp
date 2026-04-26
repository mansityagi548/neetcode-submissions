class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> freq(26);
        for(char ch : s1){
            freq[ch - 'a']++;
        }

        int windowSize = s1.length();
        for(int i = 0 ; i < s2.length() ; i++){
            int windowIndex = 0 ; int index = i;
              vector <int> s2Freq(26);
            while(windowIndex < windowSize && index < s2.length()){
                s2Freq[s2[index] - 'a']++;
                windowIndex++;
                index++;
            }
            int changes = 0;

           for(int j = 0 ; j < 26 ; j++){
               if(freq[j] == s2Freq[j]){
                changes++;
               }
           }

           if(changes == 26){
            return true;
           }
        }

        return false;
    }
};
