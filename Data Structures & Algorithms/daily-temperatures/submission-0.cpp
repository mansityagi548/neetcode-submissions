class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          if(temperatures.size() < 2)  return {0};
  int n = temperatures.size();
  vector <int> dt(n , 0);
  stack <int> warmerTemp;   

  for(int i = n-1 ; i >= 0 ; i--){
     while(!warmerTemp.empty() && temperatures[warmerTemp.top()] <= temperatures[i]){
         warmerTemp.pop();
     }


     if(!warmerTemp.empty()){
      dt[i] = warmerTemp.top() - i;
     }


     warmerTemp.push(i);
  }

  return dt;
    }
};
