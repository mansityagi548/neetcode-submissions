class TimeMap {
public:
  unordered_map < string,  vector < pair < int, string >>> m1;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m1[key].push_back({timestamp , value});
    }
    
    string get(string key, int timestamp) {
         string maxVal = "";
        if(m1.find(key) != m1.end()){
          vector<pair<int,string>>& vec = m1[key];

          int start = 0;
          int end = vec.size() -1;

          while(start <= end){
            int mid = start + (end - start) / 2;

            if(vec[mid].first == timestamp){
              return vec[mid].second;
            }else if (vec[mid].first > timestamp){
              end = mid -1;
            }else{
              start = mid + 1;
              maxVal = vec[mid].second;
            }
           
          }
        }

    return maxVal;
           
    }
};
