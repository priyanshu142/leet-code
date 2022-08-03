class Solution
{
public:
  static bool comp(string &s1, string &s2)
  {
    if (s1 + s2 > s2 + s1)
    {
      return true;
    }
    return false;
  }
  string largestNumber(vector<int> &nums)
  {
    vector<string> vc;
    for (auto i : nums)
    {
      vc.push_back(to_string(i));
    }
    sort(vc.begin(), vc.end(), comp);
    string res;
    for (auto it : vc)
    {
      res += it;
    }
    while (res[0] == '0' && res.length() > 1)
    {
      res.erase(0, 1);
    }
    return res;
  }
};