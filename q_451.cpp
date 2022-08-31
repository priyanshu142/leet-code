class Solution
{
public:
  static bool cmp(pair<char, int> &a, pair<char, int> &b)
  {
    return a.second > b.second;
  }
  string sor(map<char, int> &mp)
  {
    vector<pair<char, int>> a;
    for (auto &it : mp)
    {
      a.push_back(it);
    }
    sort(a.begin(), a.end(), cmp);
    string p;
    for (auto &it : a)
    {
      while (it.second > 0)
      {
        p += it.first;
        it.second--;
      }
    }
    return p;
  }
  string frequencySort(string s)
  {
    map<char, int> mp;
    for (auto it : s)
    {
      mp[it]++;
    }
    string p = sor(mp);

    return p;
  }
};