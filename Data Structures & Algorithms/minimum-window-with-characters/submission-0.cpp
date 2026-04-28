class Solution {
public:
    string minWindow(string s, string t) {
         if(t.length() > s.length() )  return "";
  vector <int> freq(128);
  int count = t.length();
  int start = 0;
  int end = 0;
  int startIndex = 0;
  int minLength = INT_MAX;
 for(char ch : t){
  freq[ch]++;
 }

 while(end < s.length()){
   if(freq[s[end++]]-- > 0) count--;

   while(count == 0){
    if(end - start < minLength){
      startIndex = start;
      minLength = end-start;
    }

    if(freq[s[start++]]++ == 0) count++;
   }
 }
  return minLength == INT_MAX ? "" : s.substr(startIndex , minLength);
    }
};
