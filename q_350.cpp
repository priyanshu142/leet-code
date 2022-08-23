
class Solution
{
public:
  vector<int> intersect(vector<int> &n1, vector<int> &n2)
  {
    vector<int> ans;
    map<int, int> mp;
    for (auto i : n1)
      mp[i]++;
    for (auto i : n2)
    {
      if (mp[i] > 0)
      {
        ans.push_back(i);
        mp[i]--;
      }
    }
    return ans;
  }
};