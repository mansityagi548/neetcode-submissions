class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      if (s1.length() > s2.length())
    return false;

  int freq1[26] = {0}; // we did this bcz it has been said that all the char are just lowercase;
  int freq2[26] = {0};

  for (int i = 0; i < s1.length(); i++){
    freq1[s1[i] - 'a']++;
    freq2[s2[i] - 'a']++;
  } // this one is for so that at first only we get the window of the size of the s1 length..

  int changes = 0;

  for (int i = 0; i < 26; i++){
    if (freq1[i] == freq2[i]){
      changes++;
    }
  } // this one  for so that the window we get is similar or not .. 

  int del = 0;
  for (int i = s1.length(); i < s2.length(); i++){
    if (changes == 26)
    {
      return true;
    } // we did it inside that if it is from the first only we will return true but also after doing all the if we will see whether it is 26 or not and that way we can save time to go through all the string.. 

    int index = s2[i] - 'a'; 
    freq2[index]++; // this is for adding one char from the right side 
    if (freq1[index] == freq2[index]){
      changes++;
    } else if (freq1[index] + 1 == freq2[index]) {
      changes--;
    } // these two are for like if  now we get it then that means we maybe have been in one where we got  that and in else if we checked this that if they were similar before and now they that not then we have to change the  value of changes as well 

    int index2 = s2[del] - 'a';
    freq2[index2]--; // this for deleting the char from left side 
    if (freq1[index2] == freq2[index2])
    {
      changes++;
    }
    else if (freq1[index2] - 1 == freq2[index2])
    {
      changes--;
    } 
    del++;  // these two ifs if now they are same then that means there was some value in freq2 that has been removed and now both are same but if they were before then that means there  we lost one char and it is not wrong bcz we need them in continuous manner here it means there was a match but not in continuous manner .. 
  }
  return changes == 26; // this one is till the last one like if the last one we needed to complete if changes = 26 then true else false ; 
    }
};
