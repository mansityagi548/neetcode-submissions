class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

   for (string str : tokens){
      if (str == "*"){
         int first = st.top();
         st.pop();
         int second = st.top();
         st.pop();
         st.push(second * first);
      }else if (str == "+"){
          int first = st.top();
         st.pop();
         int second = st.top();
         st.pop();
         st.push(second + first);
      }else if (str == "-"){
           int first = st.top();
         st.pop();
         int second = st.top();
         st.pop();
         st.push(second - first);

      }
      else if (str == "/"){
         int first = st.top();
         st.pop();
         int second = st.top();
         st.pop();
         st.push(second / first);
      }
      else{
         st.push(stoi(str));
      }
   }

   return st.top();
    }
};
