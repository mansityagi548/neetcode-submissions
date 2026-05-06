class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
          if(position.size() == 1) return 1;
  int Fleet = 0;
  vector <pair<int,int>> cars;
  for(int i = 0 ; i < position.size() ; i++){
    cars.push_back({position[i] , speed[i]});
  }
  std::sort(cars.begin() , cars.end() , greater<pair<int,int>>());
 
  stack <double> time;

  for(auto it : cars){
    int posn = it.first;
    int spd = it.second;
    double timeTaken = (double)(target - posn) / spd;


    if(time.empty() || timeTaken > time.top()){
        time.push(timeTaken); // in this one the first will be the one that is closer to the destination bcz of that sorting we did now any which has time less than this will definately collide but greter than this not collide even if their speed is high then the 1st one .. 
    }
  }

  return time.size();
    }
};
