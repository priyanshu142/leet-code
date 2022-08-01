class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    unordered_map<int, int> mp;
    int count = 0;
    int max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]]++;
    }
    for (auto &it : mp)
    {
      if (it.second > count)
      {
        count = it.second;
        max = it.first;
      }
    }
    return max;
  }
};
