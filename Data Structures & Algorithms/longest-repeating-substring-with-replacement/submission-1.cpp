class Solution {
public:
    int characterReplacement(string s, int k) {
          int length = 0;
         for(char target = 'A' ; target <= 'Z' ; target++){
       for(int i = 0 ; i < s.length() ; i++){
        int change = 0;
        for(int j = i ; j < s.length() ; j++){
            if(s[j] != target){
                change++;
            }

            if(change > k){
                break;
            }


            length = max(length , j-i+1);
        }
    }
   }
    
   return length;
    }
};
