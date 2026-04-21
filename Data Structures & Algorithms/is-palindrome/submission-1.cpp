class Solution {
public:
    bool isPalindrome(string s){
         if(s.length() == 1) return true;

        int start = 0;
        int end = s.length()-1;

        while(start <= end){
           if(!(isalnum(s[start]))){
              start ++;
              continue;
           }; 
           if(!(isalnum(s[end]))){
            end--;
            continue;
           } 

           if(std::tolower(s[start]) != std::tolower(s[end]) ){
              return false;
           }

           start++;
           end--;
        }
        
        return true;
        
    }
};
