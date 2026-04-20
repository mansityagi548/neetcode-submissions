class Solution {
public:

    string encode(vector<string>& strs) {
        std::string seperator = "#";
        std::string result;
        for(string s : strs){
            int length = s.length();
           result += std::to_string(length) + seperator + s;
        }
        return result;
    }

    
    vector<string> decode(string s){
        vector <string> st;
        int i = 0;
while(i < s.length()){
   int j = s.find("#" , i);
  string numstr = s.substr(i , j-i);
  int length = stoi(numstr);
  string word = s.substr(j+1 , length);
    st.push_back(word);

    i = j + 1 + length;
} 

return st;
    }
};
