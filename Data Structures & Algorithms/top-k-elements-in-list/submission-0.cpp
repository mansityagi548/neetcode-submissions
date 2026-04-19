class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          unordered_map<int, int> m1;
  vector<vector<int>> bucket(nums.size() + 1);
  vector<int> ans;
  ans.reserve(k);

  for (int num : nums)
  {
    m1[num]++;
  }

  for (auto &p : m1)
  {
    bucket[p.second].push_back(p.first);
  }

  for (int i = bucket.size() - 1; i >= 0; i--)
  {
    for (const int col : bucket[i])
    {
      if (ans.size() < k)
      {
        ans.push_back(col);
      }
    }
  }

  return ans;
    }
};
