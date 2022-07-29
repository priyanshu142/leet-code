class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    unordered_map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
    {
      count[nums[i]]++;
    }
    unordered_map<int, int>::iterator p;
    for (p = count.begin(); p != count.end(); p++)
    {
      if (p->second == 1)
      {
        return p->first;
      }
    }
    return 0;
  }
};