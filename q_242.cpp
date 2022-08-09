class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.size() != t.size())
    {
      return false;
    }
    map<char, int> ms, mt;
    map<char, int>::iterator it1, it2;
    int i, size = s.size();
    for (i = 0; i < size; ++i)
    {
      ++ms[s[i]];
      ++mt[t[i]];
    }
    for (it1 = ms.begin(); it1 != ms.end(); ++it1)
    {
      if (it1->second != mt[it1->first])
      {
        return false;
      }
    }
    return true;
  }
};